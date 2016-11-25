f_in = open('log.csv', 'r')
f_out = open('log_.csv', 'w')

for line in f_in:
    index = line.index(',')
    str = line[index+1:len(line)]
    index = str.index(',')
    id = str[0:index]
    if len(id) == 1:
        padding = '000'
    if len(id) == 2:
        padding = '00'
    if len(id) == 3:
        padding = '0'

    f_out.writelines(padding + str)

f_in.close()
f_out.close()
