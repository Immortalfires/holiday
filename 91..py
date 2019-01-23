dict1=dict2={'Alice':95,'Beth':82,'Tom':65.5,'Emily':95,'Max':76,'William':65}
print(sorted(dict1.items(),key=lambda x:x[1]))
print(sorted(dict2.items(),key=lambda x:x[1],reverse=True))
