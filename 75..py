def d(string):
         for i in range(len(string)):
                  for j in range(len(string)-1):
                           if (string[i]!=string[j]):
                                    return i
                           else:
                                    return -1
string="kjkjsdd"
print(d(string))
