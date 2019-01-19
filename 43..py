a=[1,5,6,8,9,12,35,65,76,122]
x=int(input())
for i in range(len(a)+1):
         if x>a[i] and x<a[i+1]:
                  a.insert(i+1,x)
         if x>a[-1]:
                  a.append(x)
print(a)
