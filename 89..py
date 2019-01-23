A=input("A=")
B=input("B=")
count=0
AL=list(A)
BL=list(B)
while AL!=BL:
         for i in range(max(len(AL),len(BL))):
                  if i<len(AL):
                           if AL[i]==BL[i]:
                                    pass
                           else:
                                    AL[i]=BL[i]
                                    count+=1
                  else:
                           AL+=BL[i]
                           count+=1
print(count)
