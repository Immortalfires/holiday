def panduan(a_tuple):
         for i in range(5):
                  for j in range(1,5):
                           if (a_tuple[i]==a_tuple[j]):
                                    return True
                           else:
                                    return False
a_tuple=('physics','chemistry',2017,2.5,1,2)
panduan(a_tuple)
if (panduan(a_tuple)):
         print("YES")
else:
         print("NO")
