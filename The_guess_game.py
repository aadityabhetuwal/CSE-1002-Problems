import random as rn


def gameplay(name):
    print(' ' + name + ' Starting the game...')
    print('Guess the number which is an integer between 1 and 10')
    x = rn.randint(1, 10)
    # print("\n\n"+str(x)+"\n")
    t = 0
    flag = 0
    while t < 5:
        try:
            guess = int(input('Enter your guess'))
            if guess < x:
                print('The number is bigger than you guessed')
                print('You have only ' + str(4 - t) + ' guesses remaining')
                t += 1
            elif guess > x:
                print('the number is smaller than you guessed')
                print('You have only ' + str(4 - t) + ' guesses remaining')
                t += 1
            elif guess == x:
                print('Congrats! You guessed the correct number-' + str(x) + "\n")
                flag = 44
                break
        except ValueError:
            print('Hint: It is an integer')
            print('You have only ' + str(4- t) + ' guesses remaining')
            t += 1
    if flag == 44:
        print('You guessed the number in ' + str(t) + ' attempts')
    else:
        print('Sorry,Maximum number of guesses exceeded. The number was ' + str(x))


print('Welcome to the guess game By Bimal')
print('Enter your name to proceed further')
names = input()
print('Welcome! ' + names + ' Hope you\'re fine!')
print('In this game, you need to guess a number between 1 and 10 in as fewer steps as possible')
print('if you exceed 5 guesses, you loose the game')

ok = input('Shall we start? (Y/N)  ')
ok = ok.lower().strip()
if ok == 'y':
    print('Fine let\'s proceed')
    gameplay(names)
elif ok == 'n':
    print('okay return and rerun the program when you feel like playing')
else:
    print('Invalid input, Rerun the program and Y/N...')
    print('Quitting the program...')
    print('Program exiting....')
