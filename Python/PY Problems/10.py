# Ask the user for the number of natural numbers to sum
n = int(input("Enter the number of natural numbers to sum: "))

# Initialize sum and counter
sum = 0
i = 1

# Use a while loop to calculate the sum
while i <= n:
    sum += i
    i += 1

# Print the result
print(f"The sum of the first {n} natural numbers is: {sum}")
