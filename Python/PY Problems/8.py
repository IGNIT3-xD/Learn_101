givenNumber = int(input("Enter A Number Which You Want To Mulipication : "))
for i in range(1,11):
#     # print(givenNumber, "X", i, "=", givenNumber * i)

#     #altarnate usign f string
      print(f"{givenNumber} x {i} = {givenNumber * i}")

#using while loop
i = 1
while i < 11:
    print(f"{givenNumber} X {i} = {givenNumber * i}")
    i = i + 1