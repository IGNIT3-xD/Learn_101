from ast import If


num1 = int(input("Enter first number : "))
num2 = int(input("Enter second number : "))
num3 = int(input("Enter third number : "))
num4 = int(input("Enter forth number : "))

'''if (num1 > num2 and num3 and num4):
    print(num1, "Is Greatest")
elif (num2 > num1 and num3 and num4):
    print(num2, "Is Greatest")
elif (num3 > num1 and num2 and num4):
    print(num3, "Is Greatest")
elif (num4 > num1 and num2 and num3):
    print(num4, "Is Greatest")
else:
    print("Invalid number")'''

maxNumber = max(num1,num2,num3,num4)
if num1 == maxNumber:
    print(num1, "Is Greatest")
elif num2 == maxNumber:
    print(num2, "Is Greatest")
elif num3 == maxNumber:
    print(num3, "Is Greatest")
elif num4 == maxNumber:
    print(num4, "Is Greatest")
else:
    print("Invalid Number")

