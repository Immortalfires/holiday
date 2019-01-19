import sys
fp=open('test.txt','w')
string=input("enter a string:\n")
string=string.upper()
fp.write(string)
fp=open('test.txt','r')
print (fp.read())
fp.close()
