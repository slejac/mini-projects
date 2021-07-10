from nba_api.stats.static import teams
from nba_api.stats.endpoints import teamyearbyyearstats
import numpy as np
import pandas as pd
from termcolor import colored
teams = teams.get_teams()
ids = []
name = []
for line in teams:
    ids.append(line['id'])
    name.append(line['full_name'])
arr = np.column_stack((ids, name))
pct = []
for team in arr:
    data = pd.DataFrame(teamyearbyyearstats.TeamYearByYearStats(team_id=team[0]).get_data_frames()[0])
    pct.append(data["WIN_PCT"].iloc[-1])
arr = np.column_stack((arr, pct))
#arr.sort(key=lambda x: x[2])
odds = ["14%", "14%", "14%", "11.5%", "11.5%", "9%", "7.5%", "4.5%", "4.5%", "4.5%", "1.8%", "1.7%", "1%", "0.5%", "0%","0%","0%","0%","0%","0%","0%","0%","0%","0%","0%","0%","0%","0%","0%","0%"]
arr = np.column_stack((arr, odds))
counter = 1
print("Tankathon: NBA 1st Pick Odds Tracker")
for teams in arr:
    print(counter, end='')
    if teams[2] > .5:
        print(colored(team[1], 'green'), teams[3])
    elif team[2] == .5:
        print(colored(team[1], 'yellow'), teams[3])
    else:
        print(colored(team[1], 'red'), teams[3])
    counter += 1