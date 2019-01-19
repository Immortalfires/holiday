def even(n):
         i=0
         sum=0.0
         for i in range(2,n+1,2):
                  sum+=1.0/i
         return sum
def odd(n):
         i=0
         sum=0
         for i in range(1,n+1,2):
                  sum+=1.0/i
         return sum

n=int(input("please input a bumber:"))
if n%2==0:
         print(even(n))
else:
         print(odd(n))
