def code(n):
         a=(n//1000+5)%10
         b=((n//100)%10+5)%10
         c=((n%100)//10+5)%10
         d=(n%10+5)%10
         a,d=d,a
         b,c=c,b
         new=a*1000+b*100+c*10+d
         return new

x=int(input("input the digit:"))
print("the code is ",end="")
print(code(x))
