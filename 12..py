from math import *
x=int(input())
if x<=0:
        print("请重新输入")
else:
         if 3**round(log(x,3))==x:
                  print("Yes")
         else:
                  print("No")
