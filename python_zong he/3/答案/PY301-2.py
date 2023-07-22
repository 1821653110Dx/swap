# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准

f = open('PY301-SunSign.csv','r')
ls = []
ls = f.readlines()
while True:
    s = input('请输入星座序号（例如，5）:')
    for i in s.split():
        for line in ls:
            lt = line.strip('\n').split(',')
            if i == lt[0]:
                print("{}({})的生日是{}月{}日至{}月{}日之间".format(lt[1],lt[4],lt[2][:-2],lt[2][-2:],lt[3][:-2],lt[3][-2:]))
f.close()
