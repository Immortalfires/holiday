import sys
filename=input("enter filename:")
fp=open(filename,"w")
ch=input("enter string:")
while ch!='#':
         fp.write(ch)
         sys.write(ch)
         ch=input()
fp.close()
