﻿# 请在______处使用一行代码或表达式替换
#
# 注意：请不要修改其他已给出代码

a = [3,6,9]
b = eval(input()) #例如：[1,2,3]
j=1
for i in range(len(a)):
    b.insert(j,a[i])
    j+= 2
print(b)
