import turtle
 
pen=turtle.Turtle() #定义画笔实例
a=1
for i in range(120):
    if 0<=i<30 or 60<=i<90:
        a=a+0.2
        pen.lt(3) #向左转3度
        pen.fd(a) #向前走a的步长
    else:
        a=a-0.2
        pen.lt(3)
        pen.fd(a)
 
print(pen)
turtle.mainloop()
