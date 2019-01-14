def plan(n):
         k=0
         for i in range(0,n+1):
                  for j in range(0,n+1):
                           if(i+2*j==n):
                                    k=k+1
                                    print("方案%d:%2d次一阶，%2d次两阶。"%(k,i,j))
n=int(input())
plan(n)
