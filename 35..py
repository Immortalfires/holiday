x=int(input("请输入一个五位数："))
if(x<=99999 and x>9999):   
         a=x//10000        #万位
         b=(x//1000)%10   #千位
         c=(x%100)//10   #十位
         d=x%10   #个位
         if(a==d and b==c):
                  print("是回文数")
         else:
                  print("不是回文数")
else:
         print("请重新输入")
