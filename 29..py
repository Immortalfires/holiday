def re(n):
         if n==1:
                  sum=1
         else:
                  sum=n*re(n-1)
         return sum

n=20
sum=re(20)
print(sum)
