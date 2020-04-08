from cs50 import get_int

# getting input and checking if correct
while True:
    n = get_int('Height: ')
    if n >= 1 and n <= 8:
        break

# looping through height, printing spaces and hashes
for i in range(n):
    print(" " * (n - i - 1), end="")
    print("#" * (i + 1), end="")
    print("  ", end="")
    print("#" * (i + 1))