# I do not own this CSV file, data was collected by Basketball-Reference.com
# and organized and displayed on Kaggle.com by Justinas Cirtautas
from os import system
import pandas as pd

def Introduction():
    system("cls")
    print("Using data from every player's individual NBA seasons ", end='')
    print("between 1996-97 and 2019-20, data analyses' can be conducted.")
    print("Select which data you would like to analyze below by ", end ='')
    print("entering it's respective number:\n\n\t1 - Points Per Game")
    print("\t2 - Rebounds Per Game\n\t3 - Assists Per Game\n\t4 - Net Rating")
    print("\t5 - Offensive Rebounding Rate\n\t6 - Defensive Rebounding Rate")
    print("\t7 - Usage Rate\n\t8 - True Shooting Percentage")
    print("\t9 - Assist Rate\n\t10 - Exit")
    
def ErrorHandling(error = 2):
    if error == 1:
        value = int(input("Invalid input, please enter a valid selection: "))
        return value
    else:
        value = input("Invalid input, please enter a valid selection: ")
        return value
    
def SampleSize(selection):
    system("cls")
    print("There are 82 games in a typical NBA season, but keep in mind that")
    print("seasons have been shorted to as much as 66 games (2011-12)")
    print("\nHow many games would you like the minimum sample size to ",end='')
    print("be?: ", end='')
    games = int(input())
    while games > 82 or games < 0:
        games = ErrorHandling(1)
    if selection == 1:
        Scoring(games)
    elif selection == 2:
        Rebounding(games)
    elif selection == 3:
        Assists(games)
    elif selection == 4:
        Net(games)
    elif selection == 5:
        OReb(games)
    elif selection == 6:
        DReb(games)
    elif selection == 7:
        Usg(games)
    elif selection == 8:
        TS(games)
    elif selection == 9:
        AssistRate(games)

def Scoring(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst scoring seasons?")
    quality = input("\nEnter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum points per game you would like to")
    print("see your results in (25 points per game is considered high")
    print("scoring ", end='')
    limit = int(input("while 4 points per game is low scoring): "))
    system("cls")
    if quality == 'b' or quality == 'B':
        players = data[(data["pts"] >= limit) & (data["gp"] >= games)]
        print("The following players are great scorers:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["pts"][athlete], " PPG")
    else:
        players = data[(data["pts"] <= limit) & (data["gp"] >= games)]
        print("The following players are low scorers:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["pts"][athlete], " PPG")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")
    
def Rebounding(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst rebounding seasons?")
    quality = input("\nEnter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum rebounds per game you would like to")
    print("see your results in (15 rebounds per game is considered ", end='')
    print("high, ", end='')
    limit = int(input("while 2 rebounds per game is low rebounding): "))
    system("cls")
    if quality == 'b' or quality == 'B':
        players = data[(data["reb"] >= limit) & (data["gp"] >= games)]
        print("The following players are great rebounders:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["reb"][athlete], " RPG")
    else:
        players = data[(data["reb"] <= limit) & (data["gp"] >= games)]
        print("The following players are low rebounders:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["reb"][athlete], " RPG")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")
    
def Assists(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst assisting seasons?")
    quality = input("\nEnter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum assists per game you would like to")
    print("see your results in (10 assists per game is considered ", end='')
    print("high, ", end='')
    limit = int(input("while 2 assists per game is low): "))
    system("cls")
    if quality == 'b' or quality == 'B':
        players = data[(data["ast"] >= limit) & (data["gp"] >= games)]
        print("The following players are great passers:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["ast"][athlete], " APG")
    else:
        players = data[(data["ast"] <= limit) & (data["gp"] >= games)]
        print("The following players have low assist totals:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["ast"][athlete], " APG")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")
    
def Net(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst net rating seasons?")
    quality = input("\nEnter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum net rating you would like to see")
    print("your results in (15 is considered very high, while -15 is ", end='')
    limit = int(input("very low): "))
    system("cls")
    if quality == 'b' or quality == 'B':
        players = data[(data["net_rating"] >= limit) & (data["gp"] >= games)]
        print("The following players are great players:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["net_rating"][athlete])
    else:
        players = data[(data["net_rating"] <= limit) & (data["gp"] >= games)]
        print("The following players have low net ratings:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["net_rating"][athlete])
    print("\nNet Rating: Average point differential per 100 ",end='')
    print("possessions for a player")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")
    
def OReb(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst offensive rebounding")
    print("seasons?")
    quality = input("\nEnter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum offensive rebounding rate you would")
    print("like to see your results in (16% is very high, while 2% is ",end='')
    limit = int(input("very low), please omit the percentage sign: "))
    limit /= 100
    system("cls")
    if quality == 'b' or quality == 'B':
        players = data[(data["oreb_pct"] >= limit) & (data["gp"] >= games)]
        print("The following players are great offensive rebounders:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["oreb_pct"][athlete], "%")
    else:
        players = data[(data["oreb_pct"] <= limit) & (data["gp"] >= games)]
        print("The following players are low offensive rebounders:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["oreb_pct"][athlete], "%")
    print("\nOffensive Rebound Rate: The percentage of rebounds an ", end='')
    print("offensive player earns when on the floor")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")
    
def DReb(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst defensive rebounding")
    print("seasons?")
    quality = input("\nEnter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum defensive rebounding rate you would")
    print("like to see your results in (33% is very high, while 6% is ",end='')
    limit = int(input("very low), please omit the percentage sign: "))
    limit /= 100
    system("cls")
    if quality == 'b' or quality == 'B':
        players = data[(data["dreb_pct"] >= limit) & (data["gp"] >= games)]
        print("The following players are great defensive rebounders:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["dreb_pct"][athlete], "%")
    else:
        players = data[(data["dreb_pct"] <= limit) & (data["gp"] >= games)]
        print("The following players are low defensive rebounders:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["dreb_pct"][athlete], "%")
    print("\nDefensive Rebound Rate: The percentage of rebounds a ", end='')
    print("defensive player earns when on the floor")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")
    
def Usg(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the highest or lowest usage rate")
    print("seasons?")
    quality = input("\nEnter a h (high) or a l (low): ")
    while quality != 'h' and quality != 'H' and quality != 'l' and quality != 'L':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum usage rating you would like to see")
    print("your results in (35% is typical high usage, 10% is typical", end='')
    limit = int(input(" for low usage), please omit the percentage sign: "))
    limit /= 100
    system("cls")
    if quality == 'h' or quality == 'H':
        players = data[(data["usg_pct"] >= limit) & (data["gp"] >= games)]
        print("The following players are high usage:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["usg_pct"][athlete], "%")
    else:
        players = data[(data["usg_pct"] <= limit) & (data["gp"] >= games)]
        print("The following players are low usage:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["usg_pct"][athlete], "%")
    print("\nUsage Rate: The estimated percentage of a player's rate ", end='')
    print("of ball usage when on offense (in a balanced system all")
    print("five players have a usage percentage of approximately 20%)")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")
    
def TS(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst true shooting")
    print("seasons?")
    quality = input("\nEnter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum true shooting percentage you would")
    print("like to see your results in (65% is very high, while 45% is",end='')
    limit = int(input(" very low), please omit the percentage sign: "))
    limit /= 100
    system("cls")
    if quality == 'b' or quality == 'B':
        players = data[(data["ts_pct"] >= limit) & (data["gp"] >= games)]
        print("The following players are high efficiency shooters:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["ts_pct"][athlete], "%")
    else:
        players = data[(data["ts_pct"] <= limit) & (data["gp"] >= games)]
        print("The following players are low efficiency shooters:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["ts_pct"][athlete], "%")
    print("\nTrue Shooting: A percentage that represents a player's ", end='')
    print("efficiency when taking field goals, three-point shots, and")
    print("free throw's into consideration")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")
    
def AssistRate(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst assist rate")
    print("seasons?")
    quality = input("\nEnter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("\nEnter the maximum or minimum assist rate you would")
    print("like to see your results in (45% is very high, while 2% ", end='')
    limit = int(input("is very low), please omit the percentage sign: "))
    limit /= 100
    system("cls")
    if quality == 'b' or quality == 'B':
        players = data[(data["ast_pct"] >= limit) & (data["gp"] >= games)]
        print("The following players are high efficiency passers:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["ast_pct"][athlete], "%")
    else:
        players = data[(data["ast_pct"] <= limit) & (data["gp"] >= games)]
        print("The following players are low efficiency passers:")
        for athlete in players.index:
            print(data["season"][athlete], end=' ')
            print(data["player_name"][athlete], ": ", end='')
            print(data["ast_pct"][athlete], "%")
    print("\nAssist Rate: The estimated percentage of teammate field ", end='')
    print("a player assists on when on the floor")
    print("\nIf no data is present your search was too specific, ",end='')
    print("please broaden your search criteria.")