month=int(input("请输入月份"))
if month<=3:
         sum=2
else:
         n=(month//3)+1
         sum=2**n
print("一共%d只兔子"%sum)
