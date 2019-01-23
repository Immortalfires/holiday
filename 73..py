target=int(input("enter the target number"))
nums=[]
x=int(input("number:"))
for i in range(5):
         nums.append(x)
         x=int(input("number:"))
print (nums)

for j in range(0,5):
         for k in range(1,5):
                  if nums[j]+nums[k]==target and nums[j]!=nums[k]:
                           print("下标是%d,%d"%(j,k))
                           break
