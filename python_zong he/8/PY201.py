#
# 在____________上补充代码
# 请不要修改其他代码
#

____________
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
t.seth(____________)
t.fd(Y_len)

t.pencolor('red')
t.pensize(5)
for i in range(len(ls)):
    t.____________
    t.goto(x0 + (i+1)*50, ____________)
    t.seth(90)
    t.pendown()
    t.fd(____________)
t.done()

