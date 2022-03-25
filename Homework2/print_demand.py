"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
from urllib import request
# Define the remote file to retrieve
remote_url = "https://www.senarclens.eu/~gerald/teaching/cms/vrptw/r101.txt"
# Define the local filename to save data
r101 = "r101.txt"
# Download remote and save locally
request.urlretrieve(remote_url, r101)

r101=open("r101.txt","r")
demand=0

r101=r101.readlines()#.splitlines()
r101.pop(0)

for line in r101:
    
    line=line.split()
    demand=demand+float(line[3])

print(f"Total demand: {demand}")

"""
  line_sep=line.split(" ")

    line_counter=line_sep.count('')  noob gewesen
    for i in range(line_counter):
        line_sep.remove('')
"""