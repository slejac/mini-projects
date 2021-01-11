# I do not own this CSV file, data was collected by Basketball-Reference.com
# and organized and displayed on Kaggle.com by Justinas Cirtautas
from os import system
import pandas as pd

def Introduction():
    system("cls")
    print("Using data from every player's individual NBA seasons between")
    print("1996-97 to 2019-20, data analyses' can be conducted. Select which")
    print("data you would like to analyze below by entering it's respective")
    print("number\n\n\t1 - Scoring\n\t2 - Rebounding\n\t3 - Assists")
    print("\t4 - Net Rating\n\t5 - Offensive Rebounding Rate")
    print("\t6 - Defensive Rebounding Rate\n\t7 - Usage Rate")
    print("\t8 - True Shooting Percentage\n\t9 - Assist Rate\n\t10 - Exit")
    
def ErrorHandling():
    value = int(input("Invalid input, please enter a valid selection: "))
    return value

def SampleSize(selection):
    system("cls")
    print("There are 82 games in a typical NBA season, but keep in mind that")
    print("seasons have been shorted to as much as 66 games (2011-12)")
    print("How many games would you like this sample size to be?: ", end='')
    games = int(input())
    while games > 82 or games < 0:
        games = ErrorHandling()
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
    print("Would you like to see the best or worst scoring seasons?", end='')
    quality = input("Enter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("Enter the maximum or minimum points per game you would like to see")
    print("your results in (25 points per game is considered high ", end='')
    print("scoring", end='')
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
    
def Rebounding(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst rebounding seasons?",end='')
    quality = input("Enter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("Enter the maximum or minimum rebounds per game you would like to")
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
    
def Assists(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst assisting seasons?", end='')
    quality = input("Enter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("Enter the maximum or minimum assists per game you would like to")
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
    
def Net(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst net rating seasons?",end='')
    quality = input("Enter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("Enter the maximum or minimum net rating you would like to see")
    print("your results in (17 is considered very high, while -17 is ", end='')
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
        
def OReb(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst offensive rebounding")
    print("seasons?", end='')
    quality = input("Enter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("Enter the maximum or minimum offensive rebounding rate you would")
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
    
def DReb(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst defensive rebounding")
    print("seasons?", end='')
    quality = input("Enter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("Enter the maximum or minimum defensive rebounding rate you would")
    print("like to see your results in (33% is very high, while 5% is ",end='')
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
    
def Usg(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the highest or lowest usage rate")
    print("seasons?", end='')
    quality = input("Enter a h (high) or a l (low): ")
    while quality != 'h' and quality != 'H' and quality != 'l' and quality != 'L':
        quality = ErrorHandling()
    print("Enter the maximum or minimum usage rating you would like to see")
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
    
def TS(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst true shooting")
    print("seasons?", end='')
    quality = input("Enter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("Enter the maximum or minimum true shooting percentage you would")
    print("like to see your results in (65% is very high, while 45% is",end='')
    limit = int(input(" very low), please omit the percentage sign: "))
    limit /= 100
    system("cls")
    if quality == 'h' or quality == 'H':
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
    
def AssistRate(games):
    system("cls")
    data = pd.read_csv('all_seasons.csv')
    print("Would you like to see the best or worst assist rate")
    print("seasons?", end='')
    quality = input("Enter a b (best) or a w (worst): ")
    while quality != 'b' and quality != 'B' and quality != 'w' and quality != 'W':
        quality = ErrorHandling()
    print("Enter the maximum or minimum assist rate you would")
    print("like to see your results in (45% is very high, while 1.5% ", end='')
    limit = int(input("is very low), please omit the percentage sign: "))
    limit /= 100
    system("cls")
    if quality == 'h' or quality == 'H':
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
    