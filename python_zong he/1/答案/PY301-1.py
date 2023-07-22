# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
# 请在______处使用一行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准

f = open('sensor.txt','r',encoding='utf-8')
fo = open('earpa001.txt','w')
ls = f.readlines()
for line in ls:
    lt = line.strip('\n').split(',')
    if lt[1] == ' earpa001':
        fo.write('{},{},{},{}\n'.format(lt[0],lt[1],lt[2],lt[3]))
f.close()
fo.close()

