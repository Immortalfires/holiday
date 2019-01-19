str=input("请输入一串字符串")
def distract(x):
         if x==-1:
                  return ''
         else:
                  return  str[x]+distract(x-1)
print(distract(len(str)-1))
