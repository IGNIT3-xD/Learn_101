from operator import truediv


text = input("Enter your text : ")
spam = False

if("make money online" in text or "make money" in text):
    spam = True
elif("subscribe" in text):
    spam = True
elif("click this" in text):
    spam = True
elif("18+" in text or "sex" in text):
    spam = True
else:
    spam = False

if spam:
    print(text, "Is Spam")
else:
    print(text, "Is Not Spam")