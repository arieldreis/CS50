def mario(altura):
    for i in range(1, altura + 1):
        for j in range(altura - i):
            print(" ", end="")
        for k in range(i):
            print("#", end="")
        print()
while True:
    try:
        altura = int(input("Height: "))
        if altura > 0:
            break
    except ValueError:
        pass
# Calling a function
mario(altura)