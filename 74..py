monkey=0
peach=0
a=1

while monkey<5:
         peach=4*a
         for monkey in range(0,5):
                  if peach%4!=0:
                           break
                  else:
                           monkey+=1
                  peach=(peach/4)*5+1
         a+=1
print(peach)
