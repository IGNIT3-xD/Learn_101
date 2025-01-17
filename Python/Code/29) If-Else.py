a = int(input("Enter a = "))
b = int(input("Enter b = "))

if a > b:
    print(a, "Is Bigger Than", b)
elif a < b:
    print(b, "Is Bigger Than", a)
else:
    print("Both Are Equal")

print("-------------------------------------")

# And or
x = int(input("Enter x = "))
y = int(input("Enter y = "))
z = int(input("Enter z = "))

if x > y and x > z:
    print(x, "X Is Bigger")
elif y > x and y > z:
    print(y, "Y Is Bigger")
elif z > x and z > y:
    print(z, "Z Is Bigger")
else:
    print("All Are Equal")
