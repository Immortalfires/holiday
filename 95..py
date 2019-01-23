nums=[3,0,1,5,6,4,8,7,9,10]
sum=0
sum1=0
for i in range(max(nums)+1):
         sum+=i
for i in range(len(nums)):
         sum1+=nums[i]
a=sum-sum1
print(a)
