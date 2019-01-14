I=int(input("请输入利润(万元):"))
if (I<=10):
         prize=0.1*I
elif (I>10 and I<=20):
         prize=1+(I-10)*0.075
elif (I>20 and I<=40):
         prize=1.75+(I-20)*0.05
elif (I>40 and I<=60):
         prize=2.75+(I-40)*0.03
elif (I>60 and I<=100):
         prize=3.35+(I-60)*0.015
else:
         prize=3.95+(I-100)*0.01
print("应发奖金是  %d 万元"%prize)
