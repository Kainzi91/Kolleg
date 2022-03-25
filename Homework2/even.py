"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
up=int(input("Upper limit: "))

for i in range(up):
    
    if (i%2==0 and i**2 < up):
        print(i**2)

        

