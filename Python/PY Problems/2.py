from itertools import count


print("--------Enter 5 Fruits Name below--------\n")
f1 = input("First Fruit name : \n")
f2 = input("Second Fruit name : \n")      
f3 = input("Third Fruit name : \n")
f4 = input("Forth Fruit name : \n")
f5 = input("Fifth Fruit name : \n")
frutisList =[f1,f2,f3,f4,f5]
print(frutisList,"\n")

print("------Enter Students Marks-------\n")
s1 = int(input("First Studnet Mark : "))
s2 = int(input("Second Studnet Mark : "))      
s3 = int(input("Third Studnet  Mark : "))
s4 = int(input("Forth Studnet Mark : "))
s5 = int(input("Fifth Studnet Mark : "))
studentMarkList = [s1,s2,s3,s4,s5]
studentMarkList.sort()
print(studentMarkList)

print("-----Eneter 4 Numbers-----")
n1 = int(input("1st Num : "))
n2 = int(input("2nd Num : "))
n3 = int(input("3rd Num : "))
n4 = int(input("4th Num : "))
numbersList = [n1,n2,n3,n4]
print(numbersList)
print(numbersList[0] + numbersList[1] + numbersList[2] + numbersList[3])

print("----Count the values-----")
c = (7,0,8,0,0,9)
print(c.count(0)) #Count how many 0 have in the list