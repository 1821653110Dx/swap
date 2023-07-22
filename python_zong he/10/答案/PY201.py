# 请在______处使用一行代码或表达式替换
#
# 注意：请不要修改其他已给出代码

import turtle as t
import random as r

r.seed(1)
t.pensize(2)
t.pencolor('red')  #设置笔的颜色
angles = 6
points= [[0,0],[50,40],[70,80],[-40,30]]

for i in range(len(points)): 
    x0,y0 = points[i]
    t.penup()      #提起画笔，与pendown配对使用
    t.goto(x0,y0)  #移到绝对坐标处
    t.pendown()    #放下画笔

    length = r.randint(6, 16)
    for j in range(angles):
        t.forward(length)  #沿着当前方向前面指定距离
        t.backward(length) #沿着当前相反方向前进指定距离
        t.right(360 / angles)
t.done()
