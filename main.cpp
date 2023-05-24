import random

playaWins = 0
playaLosses = 0
ties = 0

while True:
    print("Tis is Patrick the Python bot's game, Stone, Cloth, Sword. Neweth, it be.")
    playaChoice = input("Won't thou enter thy choice: ").lower()

    botChoice = random.choice(["stone", "cloth", "sword"])

    print("Thy Player's choice:", playaChoice)
    print("Thy Bot's choice:", botChoice)

    if playaChoice == botChoice:
        result = 0 #tie
        ties += 1
    elif (playaChoice == "stone" and botChoice == "sword") or \
            (playaChoice == "cloth" and botChoice == "stone") or \
            (playaChoice == "sword" and botChoice == "cloth"):
        result = 1 # Playa wins
        playaWins += 1
    else:
        result = -1 # bot wins
        playaLosses += 1

    if result == 0:
        print("It appears we have a tie.")
    elif result == 1:
        print("It appears, You have won. Much congratulations.")
    else:
        print("It appears the bot wins this one lad.")

    print("Scoerboard: ")
    print("Playa wins: ", playaWins)
    print("Playa looses: ", playaLosses)
    print("Ties: ", ties)

    playAgain = input("Do you want to play again? (y/n): ")

    if playAgain.lower() != 'y':
        print("Understood young lad, farewell!")
        break
