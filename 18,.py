import time
print("当前时间戳：",time.time())

print("本地时间：",time.localtime())

print("格式化当前时间：",time.asctime())

print("格式日期：",time.strftime("%Y-%m-%d %H:%M:%S",time.localtime()))
