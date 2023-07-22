#
# 在____________上补充代码
# 请不要修改其他代码
#

import turtle as t #对turtle库中函数调用采用更简洁的形式
import random as r
color = ['red','orange','blue','green','purple']
r.seed(1)
for i in range(5):
    rad = r.randint(20,50) #在[20,50]之间生成一个半径值
    x0 = r.randint(-100,100)
    y0 = r.randint(-100,100)
    t.color(r.choice(color))
    t.penup() #提起画笔
    t.goto(x0,y0) #移到绝对坐标处
    t.pendown() #放下画笔
    t.circle(rad)
t.done()
