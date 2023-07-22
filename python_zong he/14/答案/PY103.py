#
# 请完善代码
#

f = open('data1.txt')
ls = []
for line in f:
    for c in line:
        if c not in ls:
            ls.append(c)
f.close()
print(len(ls))
