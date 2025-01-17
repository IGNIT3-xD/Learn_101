for i in range(1, 11):
    print(i)

print("-------------------------------------")

name = "Imran"
for x in name:
    print(x)

print("-------------------------------------")

color = ["Red", "Green", "Blue", "Yellow", "Black"]
for i in color:
    print(i)

print("-------------------------------------")

# Break
for num in range(1, 11):
    print(num)
    if num == 7:
        break
print("Thala for a reason")

print("-------------------------------------")

# Continue
for _num in range(1, 6):
    if _num == 2:  # It'll skip 2
        continue
    print(_num)
