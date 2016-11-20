/*===========================================================================*/
// functions to convert the FatFs functions to C standard routines

#include "ch.h"
#include "hal.h"

#include "ff.h"

extern FATFS SDC_FS;
static SDCDriver SDCD1;

static FIL file_sdc;
static FRESULT fres; // error code for fatfs calls
extern bool_t fs_ready;

FIL * fopen_( const char * fileName, const char *mode )
{
  BYTE attr = FA_READ;
  FIL* File = &file_sdc;
  
  if (mode[0] == 'a')
  {
    fres = f_open(File, fileName, FA_WRITE | FA_OPEN_EXISTING );
    if (fres != FR_OK)
    {
      // file does not exist, create it
      fres = f_open(File, fileName, FA_WRITE | FA_OPEN_ALWAYS );
    }
    else
    {
      // rewind file to end for append write
      fres = f_lseek(File, f_size(File));
    }
  }
  else
  {
    // determine attributes to open file
    if (mode[0] == 'r')
      attr = FA_READ;
    else
    if (mode[0] == 'w')
      attr = FA_WRITE | FA_OPEN_ALWAYS;
    
    fres = f_open(File, fileName, attr);
  }

  // if file opened -- return pointer to local variable
  if (fres == FR_OK) 
    return File;
  else
    return 0;
}

int fclose_(FIL   *fo)
{
  //TODO: f_sync ?
  
  if (f_close(fo) == FR_OK)
    return 0;
  else
    return EOF;
}

size_t fwrite_(const void *data_to_write, size_t size, size_t n, FIL *stream)
{
  UINT data_written;
  
  fres = f_write(stream, data_to_write, size*n, &data_written);
  if (fres != FR_OK) return 0;
    
  return data_written;
}

size_t fread_(void *ptr, size_t size, size_t n, FIL *stream)
{
  UINT data_written;

  fres = f_read(stream, ptr, size*n, &data_written);
  if (fres != FR_OK) return 0;
   
  return data_written;
}

int finit_(void)
{ 
   /*
   * Activates the SDC driver 1 using default configuration.
   */

  
  return TRUE;
}




