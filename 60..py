x=int(input())
res=0
while x>0:
         res=res*10+x%10
         x//=10
print(res)
