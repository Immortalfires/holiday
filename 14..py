count=0
for j in range(101,201):
         flag=1
         for i in range(2,j):
                 if(j%i==0):
                           flag=0
                           break
         if flag==1:
                  count+=1
                  print(j)
print("一共%d个素数"%count)
