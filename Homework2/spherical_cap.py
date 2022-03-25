"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
import math


r=float(input("Enter the radius: "))
h=float(input("Enter the height: "))


print("The spherical cap has a surface of",round(2*math.pi*r*h,3))
print("The volume of the spherical cap is",round((math.pi*h**2/3)*(3*r-h),3))
