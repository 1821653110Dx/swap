#
# 在____________上补充代码
# 请不要修改其他代码
#

import turtle as t #更简洁地调用turtle库
ls = [69, 292, 33, 131, 61, 254]
X_len = 400
Y_len = 300
x0 = -200
y0 = -100

t.penup()
t.goto(x0, y0)
t.pendown()

t.fd(X_len)
t.fd(-X_len)
t.seth(90) #设置笔的起始角度
t.fd(Y_len)

t.pencolor('red')
t.pensize(5)
for i in range(len(ls)):
    t.penup()             #提起画笔
    t.goto(x0 + (i+1)*50, y0) #移到绝对坐标处，这里x坐标动，y坐标不动
    t.seth(90)
    t.pendown()           #放下画笔
    t.fd(ls[i])   #表示直线爬行的距离
t.done()
