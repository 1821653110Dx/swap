#
# 在____________上补充代码 （12根短线）
#不要修改其他代码
#

h,w = eval(input("请输入起始英文字母的序号和连续输出的个数，逗号隔开:"))
cstr = ''
for i in range(w):
    c = chr(ord('a')+h+i)
    cstr += c
print(cstr)
