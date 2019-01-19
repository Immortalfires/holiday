x=int(input("请输入一个不多于五位的整数"))
count=0
t=0
while x>0:
         t=x%10
         x//=10
         count+=1
         print(t,end="")
print("\t")
print("是%d位数"%count)
