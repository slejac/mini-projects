import pandas as pd

data = pd.read_csv('all_seasons.csv')
best = data[(data["net_rating"] >= 17) & (data["gp"] >= 40)]
print("The following players are very good:")
for player in best.index:
    print(data["season"][player], data["player_name"][player], "is ", end='')
    print("very good, with a net rating of ", end='')
    print(round(data["net_rating"][player], 2), "averaging ", end='')
    print(data["pts"][player], "points per game!\n")
    
worst = data[(data["net_rating"] <= -17) & (data["gp"] >= 40)]
print("\nThe following players are very bad:")
for athlete in worst.index:
    print(data["season"][athlete], data["player_name"][athlete], "is ", end='')
    print("very poor, with a net rating of ", end='')
    print(round(data["net_rating"][athlete], 2), "averaging ", end='')
    print(data["pts"][athlete], "points per game.\n")