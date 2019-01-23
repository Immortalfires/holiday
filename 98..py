from random import *
code=""
for i in range(4):
         type=randrange(0,2)
         if type==0:
                  letter=randrange(65,91)
                  code+=chr(letter)
         if type==1:
                  num=randrange(0,10)
                  code+=str(num)
print(code)
