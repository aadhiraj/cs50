# Luhns algorthim code from https://dev.to/anuragrana/python-script-validating-credit-card-number-luhn-s-algorithm-2f7c
from cs50 import get_int
from sys import exit


def sum_digits(digit):
    if digit < 10:
        return digit
    else:
        sum = (digit % 10) + (digit // 10)
        return sum
        

card = str(get_int('Number: '))  # getting credit card number
digits = len(card)

# checking for correct no of digits
if digits not in [13, 15, 16]:
    print("INVALID")
    exit(1)

# long piece of code for luhn's algroithm
cc_num = card[::-1]
cc_num = [int(x) for x in cc_num]
doubled_second_digit_list = list()
digits = list(enumerate(cc_num, start=1))
for index, digit in digits:
    if index % 2 == 0:
        doubled_second_digit_list.append(digit * 2)
    else:
        doubled_second_digit_list.append(digit)
doubled_second_digit_list = [sum_digits(x) for x in doubled_second_digit_list]
sumluhn = sum(doubled_second_digit_list)

if sumluhn % 10 == 0:  # checking if luhns is true
    if card.startswith(("34", "37")) and len(card) == 15:  # AMEX
        print("AMEX")
    elif len(card) in [13, 16] and card.startswith("4"):  # VIS
        print("VISA")
    elif len(card) == 16 and card.startswith(("51", "52", "53", "54", "55")):  # MASTERCARD
        print("MASTERCARD")
else:
    print('INVALID')