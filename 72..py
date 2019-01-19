str1=input("please input the first string:\n")
str2=input("please input the second string:\n")
str3=input("please input the third string:\n")
print("the first:%s"%str1)
print("the second:%s"%str2)
print("the third:%s"%str3)

if str1>str2:
         str1,str2=str2,str1
if str1>str3:
         str1,str3=str3,str1
if str2>str3:
         str2,str3=str3,str2

print(str1,str2,str3)
