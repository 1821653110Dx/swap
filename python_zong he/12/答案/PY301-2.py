#
# 请在此文件作答
#

f_data = open('data.txt', 'r')
L = []
for student in f_data:
    ls = student.strip('\n').split(':')
    name = ls[0]
    score = ls[1].split(",")[1]
    L.append((name,eval(score)))
L.sort(key=lambda x:x[1],reverse=True)
L = "{}:{}".format(L[0][0],L[0][1])
print(L)


f_data.close()
