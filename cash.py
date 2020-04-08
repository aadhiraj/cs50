from cs50 import get_float

# getting user input and checking if positive
while True:
    change = get_float('Change owed: ') * 100
    if change > 0:
        break

coins = 0  # counter

for denomination in [25, 10, 5, 1]:  # looping through each available denomination
    coins = coins + int(change / denomination)
    change = change % denomination 
    if change == 0:  # checking if done
        break

print(coins)
