# Add Method
mySet = {"Mango", "Banana", "Pineapple", "Apple"}
mySet.add("Cherry")
print(mySet)

print("-------------------------------------")

# Update Method
yourSet = {1, 2, 3, 4, 5}
mySet.update(yourSet)
print(mySet)

print("-------------------------------------")

# Union Method
set1 = {60, 70, 80}
set2 = {90, 100}
print(set1.union(set2))

print("-------------------------------------")

# You can also add tuple, list in set
x = {10, 11, 12}
y = [13, 14]
x.update(y)
print(x, type(x))
