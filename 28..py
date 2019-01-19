def fibonacci(n):
         if (n==1 or n==2):
                  m=1
         else:
                  m=fibonacci(n-1)+fibonacci(n-2)
         return m

sum=0.0
for i in range(0,20):
         for j in range(0,20):
                  x=fibonacci(j+3)/fibonacci(j+2)
                  sum+=x
print(sum)
