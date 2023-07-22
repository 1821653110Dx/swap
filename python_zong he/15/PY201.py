
# 在____________上补充代码 （12根短线）
#

import turtle as t
_______（1）______
color = ['red','blue','purple','black']
r.seed(1)
for j in range(4):
    t.pencolor(color[_______（2）______])
    t.penup()
    t.goto(r.randint(-100,100), _______（3）______)
    t.pendown()
    ra = r.randint(50, 200)
    for i in range(_______（4）______):
        t.fd(_______（5）______)
        t.seth(90*i)
t.done()

