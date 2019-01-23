def setting(list1,list2):
         a_set=set(list1)
         b_set=set(list2)
         c_set=a_set & b_set
         return c_set
num1=[1,2,3,4,56,687,644]
num2=[23,3,5,6,984,1]
print(setting(num1,num2))
