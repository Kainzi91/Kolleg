"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""

#print("Längenumrechner")

lenght=float(input("Enter a distance in meters: "))

inch=round(float((lenght*100)/2.54),2)
foot=round(float(((lenght*100)/2.54)/12),2)
yard=round(float((((lenght*100)/2.54)/12)/3),2)
miles=round(float(((((lenght*100)/2.54)/12)/3)/1760),2)

miles='{:=2.2f}'.format(miles)
print(inch, "inch")
print(foot," feet")
print(yard," yards")
print(miles," miles")
