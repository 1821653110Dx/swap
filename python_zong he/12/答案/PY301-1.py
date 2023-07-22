#
# 请在此文件作答
#

f_data = open('data.txt', 'r')
f_studs = open('studs.txt', 'w')

for student in f_data:
    ls = student.split(':')
    name = ls[0]
    score = ls[1].split(",")[1]
    f_studs.write("{}:{}".format(name,score))



f_data.close()
f_studs.close()

