"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
import csv
list=[]
sum=0
with open("ANDR.VI.csv") as csvdatei:
    LOL = csv.reader(csvdatei)
    for row in LOL:
        list.append(row[4])
list.pop(0)

for values in list:
    sum=sum+float(values)

average=sum/len(list)

print(f"File to analyze: The average closing price was {round((average),2)}.")

if average < float(list[-1]) :

    print("The most recent closing price ", round(float(list[-1]),2) ,"was above the average.")

else:
    print (f"The most recent closing price ({float(list[-1])}) was not above the average.")
