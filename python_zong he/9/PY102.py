#
# 在____________上补充代码
#


ns = input("请输入一串数据：")
dnum,dchr = ____________
for i in ns:
    if i.isnumeric():
        dnum += ____________
    elif i.isalpha():
        dchr += ____________
    else:
        pass
print('数字个数：{}，字母个数：{}'.format(____________))
