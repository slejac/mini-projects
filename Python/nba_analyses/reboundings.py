import pandas as pd

data = pd.read_csv('all_seasons.csv')
good_orebs = data[(data["oreb_pct"] >= 0.17) & (data["reb"] >= 5) & (data["gp"] >= 40)]
print("The following players are great offensive rebounders:")
for player in good_orebs.index:
    print(data["season"][player], data["player_name"][player], end='')
    print(" averages", data["reb"][player], "rebounds per game ", end='')
    print("with an offensive rebound rate of ", end='')
    print(round(data["oreb_pct"][player], 2), "percent!\n")
    
bad_orebs = data[(data["oreb_pct"] < 0.0175) & (data["reb"] >= 5) & (data["gp"] >= 40)]
print("\nThe following players are poor offensive rebounders:")
for athlete in bad_orebs.index:
    print(data["season"][athlete], data["player_name"][athlete], end='')
    print(" averages", data["reb"][athlete], "rebounds per game ", end='')
    print("with an offensive rebound rate of ", end='')
    print(round(data["oreb_pct"][athlete], 4), "percent!\n")
    
good_drebs = data[(data["dreb_pct"] >= 0.33) & (data["reb"] >= 1) & (data["gp"] >= 40)]
print("\nThe following players are great defensive rebounders:")
for player2 in good_drebs.index:
    print(data["season"][player2], data["player_name"][player2], end='')
    print(" averages", data["reb"][player2], "rebounds per game ", end='')
    print("with a defensive rebound rate of ", end='')
    print(round(data["dreb_pct"][player2], 2), "percent!\n")
    
bad_drebs = data[(data["dreb_pct"] <= 0.05) & (data["reb"] >= 1) & (data["gp"] >= 40)]
print("\nThe following players are poor defensive rebounders:")
for athlete2 in bad_drebs.index:
    print(data["season"][athlete2], data["player_name"][athlete2], end='')
    print(" averages", data["reb"][athlete2], "rebounds per game ", end='')
    print("with a defensive rebound rate of ", end='')
    print(round(data["dreb_pct"][athlete2], 2), "percent!\n")