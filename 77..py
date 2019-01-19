sum=0
s=1
for i in range(1,9):
         if i==1:
                  s=4
         elif i==2:
                  s=4*7
         if i>2:
                  s*=8

         sum+=s
         print("%d位数的奇数有%d个"%(i,s))
print("一共%d个奇数"%sum)
