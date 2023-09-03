word = input()

upper_count = sum(1 for letter in word if letter.isupper())
lower_count = len(word) - upper_count

if upper_count > lower_count:
    print(word.upper())
else:
    print(word.lower())