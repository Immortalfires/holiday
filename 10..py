from time import *
print(time())

print(localtime(time()))

print(strftime('%Y-%m-%d  %H:%M:%S',localtime(time())))

sleep(2)

print(strftime('%Y-%m-%d  %H:%M:%S',localtime(time())))
