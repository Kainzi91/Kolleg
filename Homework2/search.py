"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""

filenames=input("Files: ")
filenames = filenames.split(",")

needle= input("Needle: ")

contents = []

for filename in filenames:
            with open(filename,"r") as file:
                contents.append(file.read().lower())

count=0

for cnt in range(len(contents)):
        count=count+contents[cnt].count(needle)


print("Occurrences: ",count)
