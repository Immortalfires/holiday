x=int(input())
a=list('{0:032b}'.format(x))
for i in range(16):
         a[i],a[31-i]=a[31-i],a[i]
r=int(''.join(a),2)
print (r)         
