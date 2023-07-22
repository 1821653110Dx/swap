#
# 在____________上补充代码
#


ns = input("请输入一串数据：")
dnum,dchr = 0,0  #双变量赋值方式
for i in ns:
    if i.isnumeric(): #如果是数字字符
        dnum += 1
    elif i.isalpha():
        dchr += 1
    else:
        pass  #空语句，为了保持程序结构的完整性，用于占位
print('数字个数：{}，字母个数：{}'.format(dnum,dchr))
