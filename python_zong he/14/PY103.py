#
# 请完善代码
#

______(1)_______
ls = []
for line in f:
    for c in line:
        if ______(2)_______:
            ls.append(c)
f.close()
print(len(ls))
