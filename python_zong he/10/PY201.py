# 请在______处使用一行代码或表达式替换
#
# 注意：请不要修改其他已给出代码

import turtle as t
import random as r

r.seed(1)
t.pensize(2)
t.____________('red')
angles = 6
points= [[0,0],[50,40],[70,80],[-40,30]]

for i in range(____________):
    x0,y0 = points[i]
    t.penup()
    t.goto(____________)
    t.pendown()

    length = r.randint(6, 16)
    for j in range(angles):
        t.____________(length)
        t.____________(length)
        t.right(360 / angles)
t.done()
