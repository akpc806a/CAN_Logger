FIL * fopen_( const char * fileName, const char *mode );
int fclose_(FIL   *fo);
size_t fwrite_(const void *data_to_write, size_t size, size_t n, FIL *stream);
size_t fread_(void *ptr, size_t size, size_t n, FIL *stream);
int finit_(void);
#define feof_(stream) f_eof(stream)