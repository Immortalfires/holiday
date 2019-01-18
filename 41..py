a=[]
for i in range(0,10):
         x=int(input())
         a.append(x)
a.sort(reverse=False)
print("升序：")
print(a)
a.sort(reverse=True)
print("降序：")
print(a)
