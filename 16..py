x=int(input())
n=x
a=[]
for i in range(int(x/2)+1):
         for i in range(2,x): 
                 if(x%i==0):
                          a.append(i)
                          x//=i
                          break
if len(a)==0:
         print("无质因数")
else:
         a.append(x)
         a.sort()
         print('%d=%d' % (n, a[0]), end='')
         for i in range(1,len(a)):
                  print('*%d' % a[i], end='')
