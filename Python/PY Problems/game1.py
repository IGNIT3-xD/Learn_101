import random

def game(playerInp, com):
    if playerInp == com:
        return None
    
    #Stone
    elif playerInp == 's':  #If I choose stone
        if com == 'p':      #And com choose paper
            return True     #Com win
        elif com == 'sc':   #If com choose Scissor
            return False    #Then I win Com lose
        
    #Paper
    elif playerInp == 'p':
        if com == 'sc':
            return True
        elif com == 's':
            return False

    #Scicssor
    elif playerInp == 'sc':
        if com == 's':
            return True
        elif playerInp == 'p':
            return False

#Player Input
playerInp = input("Player : Stone(s) Paper(p) or Scicssor(sc) ▶ ")

#Computer Input
print("Com : Stone(s) Paper(p) or Scissor(s)")
randNum = random.randint(1,3)
if randNum == 1:
    com = 's'
elif randNum == 2:
    com = 'p'
elif randNum == 3:
    com = 'sc'

x = game(playerInp, com)

print(f"You Choose ▶ {playerInp}")
print(f"Computer Choose ▶ {com}")

if x == None:
    print("Draw")
elif x:
    print("You Lose!")
else:
    print("You Win!")