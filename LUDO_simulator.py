import random
ans = 'y'

while ans == 'y':
    x = random.randint(0, 6)
    print(x)
    if x == 1:
        print("-----------")
        print("|         |")
        print("|    0    |")
        print("|         |")
        print("-----------")

    if x == 2:
        print("-----------")
        print("|    0    |")
        print("|         |")
        print("|    0    |")
        print("-----------")

    if x == 3:
        print("-----------")
        print("|    0    |")
        print("|    0    |")
        print("|    0    |")
        print("-----------")

    if x == 4:
        print("------------")
        print("| 0     0  |")
        print("|          |")
        print("| 0     0  |")
        print("------------")

    if x == 5:
        print("------------")
        print("| 0     0  |")
        print("|    0     |")
        print("| 0     0  |")
        print("------------")

    if x == 6:
        print("------------")
        print("|  0   0   |")
        print("|  0   0   |")
        print("|  0   0   |")
        print("------------")
    ans = input("Do you want to roll again? (Y/N)")
    ans = ans.lower()
