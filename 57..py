N = [1]
row=int(input("input a number"))
for i in range(row):  
    print(N)
    N.append(0)
    N = [N[k] + N[k-1] for k in range(i+2)]
