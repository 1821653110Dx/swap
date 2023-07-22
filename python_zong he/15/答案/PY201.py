
# 在____________上补充代码 （12根短线）
#

import turtle as t
import random as r
color = ['red','blue','purple','black']
r.seed(1)
for j in range(4):
    t.pencolor(color[r.randint(0,3)])
    t.penup()
    t.goto(r.randint(-100,100), r.randint(-100,100))
    t.pendown()
    ra = r.randint(50, 200)
    for i in range(1,5):
        t.fd(ra)
        t.seth(90*i)
t.done()

