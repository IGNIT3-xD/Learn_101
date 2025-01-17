myDict = {
    "FirstName": "M.",
    "MiddleName": "Imran",
    "LastName": "Ali",
    "BirthYear": 2002,
    "Age": 22
}
print(myDict)
print(myDict["FirstName"])
print(myDict["MiddleName"])
print(myDict["LastName"])
print(myDict["BirthYear"])
print(myDict["Age"])

print("-------------------------------------")

# Nested Dictionary
studentInfo = {
    "Mario": {
        "Name": "Mario Esponsito",
        "Country": "Spain",
        "Age": 21,
        "Section": "IT"
    }
}
print(studentInfo)
print(studentInfo["Mario"])
print(studentInfo["Mario"]["Country"])
