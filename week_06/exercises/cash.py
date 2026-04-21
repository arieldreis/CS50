# ESSA PASTA É PASTA É PARA TESTE DE BIBLIOTECA
def calculate_cents(cents):
    change = 0
    while cents >= 0.25:
        change += 1
        cents -= 0.25
    while cents >= 0.10:
        change += 1
        cents -= 0.10
    while cents >= 0.5:
        change += 1
        cents -= 0.5
    while cents >= 0.01:
        change += 1
        cents -= 0.1
    print(f"{change}", change)

while True:
    try:
        cents = float(input("Change owned: "))
        if cents >= 0:
            break
    except ValueError:
        pass
calculate_cents(cents)

# Calling the function
calculate_cents(cents)