# * Author:
# * Date:
sent = str(input("Input a sentence:"))
word = str(input("Input a word:"))
words = sent.split()
if (word in words):
    print(words.index(word))
else:
    print("no match")
