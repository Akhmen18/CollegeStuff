import random

words = ['random', 'science', 'coding', 'programming', 'creators',
         'facebook', 'awesome', 'motivation', 'robust']

print("Welcome to Hangman world")
print("There is just one rule to survive here, guess the correct word or you die")
print("We allow you 6 mistakes. If you don't guess it right after those 6 mistakes, then you die")
print("Now since that's out of our way, lets begin")

name = input("Enter yor name: ")
print("Wish you luck ", name)

word = random.choice(words)
turns = 6
guesses = ''

while turns > 0:
    failed = 0
    for char in word:
        if char in guesses:
            print(char, end='')
        else:
            print('_', end='')
            failed += 1
    print()
    if failed == 0:
        print('You won!!! \nYou are allowed to live!!')
        print('The word was ', word)
        break
    guess = input("Enter guess letter: ")
    guesses += guess
    if guess not in word:
        turns -= 1
        print("Wrong \nYou have ",+ turns," tries left")

    if turns == 0:
        print("You lost!!!")
        print('-----------')
        time.sleep(1)
        print(name, +'Executed!')
        print('-----------')
