# code for number of sentences from https://stackoverflow.com/questions/3549075/regex-to-find-all-sentences-of-text
from cs50 import get_string
import re

# getting user input and setting counter
text = get_string('Text: ')
alphabets = 0

# looping through each char to find number of alphabets
for i in range(len(text)):
    if text[i].isalpha():
        alphabets += 1

# creating a list by spliting and finding its lenght
word_list = text.split(" ")
words = len(word_list)

# finding number of sentences using regex
pat = re.compile(r'([A-Z][^\.!?]*[\.!?])', re.M)
sentences = len(pat.findall(text))

# main algorthim
L = (alphabets/words) * 100
S = (sentences/words) * 100
grade = 0.0588 * L - 0.296 * S - 15.8

# output
if grade < 1:
    print("Before Grade 1")
elif grade > 16:
    print("Grade 16+")
else:
    print(f"Grade {round(grade)}")