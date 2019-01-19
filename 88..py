a=str1=input("input a string:\n")
b=str2=input("input a string:\n")

a=list(str1)
b=list(str2)

for i in range(len(a)):
         for j in range(len(a)):
                  c=a[i:j]
                  c=str(c)
                  if c in str2 :
                           print(c)
