"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""

from urllib import request
# Define the remote file to retrieve
remote_url = "https://www.senarclens.eu/~gerald/teaching/cms/data/fc.txt"
# Define the local filename to save data
weather = "weather_data.txt"
# Download remote and save locally
request.urlretrieve(remote_url, weather)

weather=open("weather_data.txt","r")
weather_days=weather.read().splitlines()

av_temp=0
cnt=0

for line in weather_days:
    day, temp = line.split(": ")

    if (day==("Saturday") or day==("Sunday")):

            av_temp+= int(temp)
            cnt=cnt+1

av_temp=av_temp/cnt

if (av_temp >25):

    print("Next weekend, swimming would be a good activity.")
if (av_temp >12 and av_temp<=25):

    print("Next weekend, hiking would be a good activity.")

if (av_temp >5 and av_temp<=12):

    print("Next weekend, watching movies would be a good activity.")
if (av_temp >-5 and av_temp<=5):

    print("Next weekend, relaxing in the local hot springs would be a good activity.")
if  (av_temp<=-5):

    print("Next weekend, skiiing would be a good activity.")
