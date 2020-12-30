import pandas as pd

data = pd.read_csv('all_seasons.csv')
efficient = data[(data["ts_pct"] >= 0.675) & (data["pts"] >= 10) & (data["gp"] >= 40)]
print("The following players are very efficient:")
for player in efficient.index:
    print(data["season"][player], data["player_name"][player], "is ", end='')
    print("very efficient, with a true shooting percentage of ", end='')
    print(round(data["ts_pct"][player], 3), "averaging ", end='')
    print(data["pts"][player], "points per game!\n")
    
inefficient = data[(data["ts_pct"] <= 0.45) & (data["pts"] >= 10) & (data["gp"] >= 40)]
print("\nThe following players are very inefficient:")
for athlete in inefficient.index:
    print(data["season"][athlete], data["player_name"][athlete], "is ", end='')
    print("very inefficient, with a true shooting percentage of ", end='')
    print(round(data["ts_pct"][athlete], 2), "averaging ", end='')
    print(data["pts"][athlete], "points per game.\n")