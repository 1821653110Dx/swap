# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
# 请在______处使用一行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准

f = open('PY301-SunSign.csv','r')
ls = []
s = input('请输入星座中文名称（例如，双子座）:')
for line in f.readlines():
    ls = line.strip('\n').split(',')
    if ls[1] == s:
        print("{}的生日位于{}-{}之间".format(ls[1],ls[2],ls[3]))
f.close()
