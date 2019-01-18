passage=input()
for i in range(0,len(passage)+1):
         if(i==" "):
                  space+=1
         elif(i<='Z'and i>='A') or (i<='z' and i>='a'):
                  letter+=1
         elif(i<=9 and i>=0):
                  data+=1
         else:
                  other+=1
print(space,letter,data,other)
