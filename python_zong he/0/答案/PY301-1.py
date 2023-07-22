# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
# 请在______处使用一行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准

f = open('命运.txt','r')
txt = f.read()
d = {}
for i in txt:
    if i not in "，。？！《》【】“”‘’":
        d[i] = d.get(i,0)+1
ls = list(d.items())
ls.sort(key=lambda x:x[1],reverse = True)
print("{}:{}".format(ls[0][0],ls[0][1]))
f.close()
