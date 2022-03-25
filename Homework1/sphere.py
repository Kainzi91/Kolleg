"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""


from math import pi
radius = float(input("Enter a radius: "))
area = 4* radius**2 * pi
volume = (4 / 3) * radius**3 * pi
print("The sphere has a volume of", round(volume, 2))
print("The surface area of this sphere is", round(area, 2))
