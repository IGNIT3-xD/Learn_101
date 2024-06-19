n= int(input(""))
if n <= 100:
    if(n%2!=0):
        print("Weird")
    elif (n%2 == 0 and  2<=6):
        print("Not Weird")
    elif (n%2 == 0 and 6<=20):
        print("Weird")
    elif (n%2 == 0 and n>20):
        print("Not Weird")
else:
    print("Out of context")