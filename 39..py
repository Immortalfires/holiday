for i in range(1,101):
         flag=1
         for j in range(2,i):
                  if(i%j==0):
                           flag=0
                           break
         if flag:
                  print(i)
