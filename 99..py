import string
Alice=input("input the passage:")
words=str.lower(str(Alice.split()))
word_dict={index:words.count(index) for index in words}
for word in sorted (word_dict):
         if word_dict[word]>10:
                  print(word)
