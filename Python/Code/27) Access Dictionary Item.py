myDict = {
    "Name": "M. Imran Ali",
    "BirthYear": 2002,
    "Age": 22,
    "Country": "Bangladesh"
}
print(myDict["Name"])  #  #It'll throw an error if value is not present
print(myDict.get("Name"))  # It'll not throw an error if value is not present
print(myDict.keys())
print(myDict.values())
