def erjin(n):
         sum=0
         while n>0:
                  res=n%2
                  if res==1:
                           sum+=1
                  n//=2
         return sum
x=int(input())
print(erjin(x))
