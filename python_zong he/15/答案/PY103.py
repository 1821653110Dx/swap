# 请在......处完善代码，可以修改其他代码

import random as r
r.seed(1)
s=input("请输入三个整数 n,m,k：")
slist=s.split(",")

n,m,k = eval(slist[0]),eval(slist[1]),eval(slist[2])
for i in range(n):
    print(r.randint(k,m))



