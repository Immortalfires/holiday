import math
for i in range(1,10001):
         m=math.sqrt(100+i)
         n=math.sqrt(168+i)
         m=int(m)
         n=int(n)
         if(m*m==100+i and n*n==168+i):
                  print(i)
