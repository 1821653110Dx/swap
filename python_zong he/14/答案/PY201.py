import turtle as t
import random as r

color = ['red','green','blue','purple','black']
r.seed(1)
for j in range(5):
    t.pencolor(color[r.randint(0,4)])
    t.penup()
    t.goto(r.randint(-100,100),r.randint(-100,100))
    t.pendown()
    t.circle(r.randint(10,30))
t.done()
