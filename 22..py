a=int(input())
n=int(input())
count=0
sum=0
for i in range(0,n):
         count+=2*(10**i)
         sum+=count
print(sum)
