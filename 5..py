a_list=[]
x,y,z=eval(input())
a_list.append(x)
a_list.append(y)
a_list.append(z)
a_list.sort(reverse=False)
for i in range(0,3):
         print(a_list[i])
