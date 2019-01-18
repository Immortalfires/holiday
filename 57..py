def triangles(N):
    line = [1]
    for _ in range(N):
        yield line
        for i in range(1, len(line)):
            line[i] = pre[i] + pre[i - 1]
        line.append(1)
        pre = line[:]
 
N = int(input("请输入一个整数："))    
for i in triangles(N):
    print(i)
