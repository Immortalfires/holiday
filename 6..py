def fibonacci(n):
         if (n==1 or n==2):
                  m=1
         else:
                  m=fibonacci(n-1)+fibonacci(n-2)
         return m

n=int(input())
m=fibonacci(n)
print("finonacci(%d)=%d"%(n,m))
