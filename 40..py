n=int(input())
count=0
if (n<=0):
         print("")
else:
         for i in range(1,n+1):
                  flag=1
                  for j in range(2,i):
                           if(i%j==0):
                                    flag=0
                                    break
                  if flag:
                           count+=1
print(count)
