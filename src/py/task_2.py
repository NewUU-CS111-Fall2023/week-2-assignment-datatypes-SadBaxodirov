# * Author:
# * Date:
import random
randomNum = random.randint(1,100)
print(randomNum)
value = int(input("Input a value between 1 and 100 and the program compares it to random integer:"))
if randomNum == value:
        print("You win!!!")
else:
    while randomNum!=value:
        if value>randomNum:
            print("Too high")
        elif value==randomNum:
            #print("You win!!!")
            break
        else:
            print("Too low")
        value = int(input("Input a value again:"))
    print("You win!!!")

