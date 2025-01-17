import re

txt = "Today is a Gift"
# Find all the lower case character in the text in order

x = re.findall("[a-z]", txt)
print(x)
y = re.findall("[A-Z]",txt)
print(y)

z = re.search("Gift", txt)
print(z)
_x = re.search("Ignite", txt)
print(_x)

# W3 school