def number0(a_list):
         n=a_list.count(0)
         for i in range(len(a_list)):
                  biao=a_list.index(0)
                  del a_list[biao]
         for i in range(n):
                  a_list.append(0)

b_list=[]
count=0
n=int(input("number of the digit:"))
for i in range(n):
         x=int(input("input a number:"))
         b_list.append(x)
print(b_list)
number0(b_list)
print(b_list)
