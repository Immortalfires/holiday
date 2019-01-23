import string
string0=string=input("input a string only with '{}','[]','()':")
if string.strip()=="":
         print(string0,"is a vaild string")

if len(string.strip())>0:
         if len(string)%2==1:
                  print(string0,"the number of this is odd number")
         if len(string)%2==0:
                  for n in range(int(len(string))):
                           for i in range(len(string)-2):
                                    left_right1=string[i] == '(' and string[i+1] == ')'
                                    left_right2=string[i] == '[' and string[i+1] == ']'
                                    left_right3=string[i] == '{' and string[i+1] == '}'
                                    if left_right1 or left_right2 or left_right3:
                                             string = string[:i]+string[i+2:]
                                             break
                  if len(string)>2:
                           print("字符串中括号无效")
                  if len(string)==2:
                           d=['()','[]','{}']
                  if string not in d:
                           print("字符串中括号无效")
                  else:
                           print("字符串中括号有效")
