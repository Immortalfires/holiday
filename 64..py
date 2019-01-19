n=int(input("how many player:"))
list=[]
index=0
if n<3:
         print("please try again")
else:
         for i in range(1,n+1):
                  list.append(i)
         while (len(list)>1):
                  index+=2
                  if index>=len(list):
                           index%=len(list)
                           del list[index]
                  else:
                           del list[index]
         print("the winner is num%d"%list[0])
