class my:
    Car = "Mustang"
    Mobile = "Asus"
    Money = "4000 Euro"
    Country = "German"


class your(my):
    _Car = "None"
    _Mobile = "None"
    _Money = "Gorib"


x = your()
print(x.Car)
print(x.Money)
print(x.Country)
