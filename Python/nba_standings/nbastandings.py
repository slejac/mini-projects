# Add conference functionality (teaminfocommon endpoint)
# Resolve possible issue with API Read Timeouts?

from nba_api.stats.static import teams
from nba_api.stats.endpoints import teamyearbyyearstats
import numpy as np
import pandas as pd
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
print(arr)