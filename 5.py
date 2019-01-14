x,y,z=eval(input())
if x>y:
         x,y=y,x
if x>z:
         x,z=z,x
if y>z:
         y,z=z,y
print("%d %d %d"%(x,y,z))
