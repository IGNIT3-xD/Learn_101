# Remove Method
mySet = {"Mango", "Banana", "Pineapple", "Apple"}
mySet.remove("Mango")
print(mySet)

print("-------------------------------------")

# Discard Method (If the item to Remove does not exist will not rise an Error
mySet.discard("Banana")
print(mySet)

print("-------------------------------------")

# Pop Method (It will remove the item randomly)
mySet.pop()
print(mySet)

print("-------------------------------------")

# Clear Method
mySet.clear()
print(mySet)