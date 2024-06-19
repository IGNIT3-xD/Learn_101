num = int(input("Enter a number: "))
primeNumber = True

for i in range (2, num):
    if(num % i == 0):
        primeNumber = False
        break
if primeNumber:
    print(num, "Is Prime Number")
else:
    print(num, "Is Not Prime")