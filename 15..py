for x in range(100,1000):
         a=x%10          #个
         b=(x//10)%10       #十
         c=x//100            #百
         if (a**3+b**3+c**3==x):
                  print(x)
