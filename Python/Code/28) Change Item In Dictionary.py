worldCup = {
    101: "Brazil",
    102: "Italy",
    103: "Germany",
    104: "Argentina",
    105: "France"
}
noWorldCup = {
    201: "Netherlands",
    202: "Poland",
    203: "Austria",
    204: "Turkey",
    205: "Israel"
}
print(worldCup)
print(noWorldCup)

print("-------------------------------------")

# Update Method
noWorldCup.update({205: "Palestine"})
print(noWorldCup.get(205))

print("-------------------------------------")

# Pop
worldCup.pop(104)
print(worldCup)

print("-------------------------------------")

# Popitem
worldCup.popitem()  # It will remove the last item
print(worldCup)

print("-------------------------------------")

# Clear
noWorldCup.clear()
print(noWorldCup)