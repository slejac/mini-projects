import pandas as pd

data = pd.read_csv('all_seasons.csv')
high_usage = data[(data["usg_pct"] >= 0.35) & (data["pts"] >= 5) & (data["gp"] >= 40)]
print("The following players are high-usage players:")
for player in high_usage.index:
    print(data["season"][player], data["player_name"][player], "is ", end='')
    print("a high usage player, averaging ", end='')
    print(data["pts"][player], "points per game with a usage rate of ", end='')
    print(round(data["usg_pct"][player], 2), "percent!\n")
    
low_usage = data[(data["usg_pct"] <= 0.1) & (data["pts"] >= 5) & (data["gp"] >= 40)]
print("\nThe following players are low-usage players:")
for athlete in low_usage.index:
    print(data["season"][athlete], data["player_name"][athlete], "is ", end='')
    print("a low usage player, averaging ", end='')
    print(data["pts"][athlete], "points per game with a usage rate of ", end='')
    print(round(data["usg_pct"][athlete], 2), "percent!\n")