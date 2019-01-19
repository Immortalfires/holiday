a_list=[]
b_lsit=[]
c_list=[]
x=int(input("input a number,-1 end:"))
while x!=-1:
         a_list.append(x)
         c_list.append(x)
         x=int(input("input a number,-1 end:"))
print("total:",end="")
print("%d"%len(a_list))

m=int(input("how many places you want to move back:"))
b_list=a_list[-m::]
del a_list[-m::]
b_list.extend(a_list)
print("the old list is",end="")
print(c_list)
print("the new list is",end="")
print(b_list)

