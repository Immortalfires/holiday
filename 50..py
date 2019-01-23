a_list=[]
x=int(input("enter a number:"))
while x!=-1:
         a_list.append(x)
         x=int(input("enter a number:"))
print(a_list)

m=int(input("steps:"))

if m>len(a_list):
         print("error")
else:
         for i in range(m):
                  a_list.insert(0,a_list[-1])
                  a_list.pop()
         print(a_list)
