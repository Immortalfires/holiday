for x in range(1,1001):
         a=[]
         sum=0
         for i in range(1,x):
                  if (x%i==0):
                           a.append(i)
         for j in range(0,len(a)):
                  sum+=a[j]
                  if(sum==x):
                           print(a)
                           print(sum)
                           print(x)
