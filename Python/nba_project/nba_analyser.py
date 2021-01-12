# I do not own this CSV file, data was collected by Basketball-Reference.com
# and organized and displayed on Kaggle.com by Justinas Cirtautas

import time
from functions import Introduction, SampleSize

print("Welcome to the NBA Data Analyzer")
time.sleep(3)
Introduction()
selection = int(input("Enter Here: "))
while selection != 10:
    if selection >= 1 and selection <= 9:
        SampleSize(selection)
        input("\nPress enter to continue:")
    elif selection == 10:
        break
    else:
        print("Invalid Input!")
        time.sleep(2)
    Introduction()
    selection = int(input("\nEnter Here: "))