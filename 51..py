def max(a,b):
         if a>b:
                  return a
         elif a==b:
                  return ('same')
         else:
                  return b
def min(a,b):
         if a<b:
                  return a
         elif a==b:
                  return ('same')
         else:
                  return b

a,b=eval(input("请输入两个数"))
print("最大的数是",end="")
print(max(a,b))
print("最小的数是",end="")
print(min(a,b))
