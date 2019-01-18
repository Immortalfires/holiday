def factorial(n):
         if(n==1):
                  m=1
         else:
                  m=n*factorial(n-1)
         return m
x=5
sum5=factorial(x)
print(sum5)
