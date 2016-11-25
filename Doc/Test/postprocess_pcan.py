f_in = open('Log.trc', 'r')
f_out = open('Log_.trc', 'w')

for line in f_in:
    id = line[32:32+4]
    str = line[41:len(line)-2]
    f_out.writelines(id + ' ' + str+'\n')

f_in.close()
f_out.close()
