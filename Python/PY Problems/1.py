_name = input("Enter your name : ")
print("Good Afternoon, " + _name)
#Alternate
# print("Good Afternoon, ",name)

#
letter = '''Dear <Name>,
You're selected!
_________________________
Date : <Date>'''

name = input("Enter your name : ")
date = input("Enter your date : ")
letter = letter.replace("<Name>", name)
letter = letter.replace("<Date>", date)

print(letter)