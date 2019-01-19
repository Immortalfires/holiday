A=[[12,7,3],
   [4,5,6],
   [7,8,9]]

B=[[5,8,1],
   [6,7,3],
   [4,5,9]]

sum=[[0,0,0],
     [0,0,0],
     [0,0,0]]

for i in range(len(A)):
         for j in range(len(A[0])):
                  sum[i][j]=A[i][j]+B[i][j]

for k in sum:
         print(k)
