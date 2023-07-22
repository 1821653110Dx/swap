#
# 在____________上补充代码 （12根短线）
# 在……上补充一行或多行代码 （6个点）
#
lcnum = []
with open("result301.txt", "r") as fi:
    for line in fi:
        ……
lcnum.sort(key=lambda x:x[1], reverse= True)
lz = 0
lw = 0
for l in lcnum:
    ……

print("新冠确诊人数最多的地区是{},人数是{}".format(lcnum[0][0],lcnum[0][1] ))
print("新冠确诊人数超过1W的地区有{}个".format(lw))
print("新冠确诊人数为0的地区有{}个".format(lz))
