a=[23,56,12]
b=[4,5,6]

a.sort()  #对a进行排序（升序）
print(a)
a.sort(reverse=False)#对a进行排序（降序）
print(a)

print(a+b)#连接 a，b

a.extend(b)
print(a)#使用exend连接a，b
