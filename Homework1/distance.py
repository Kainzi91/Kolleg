"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
import math

x1=float(input("First point's x-coordinate: "))
y1=float(input("First point's y-coordinate: "))

x2=float(input("Second point's x-coordinate: "))
y2=float(input("Second point's y-coordinate: "))


x_slope=x1-x2
y_slope=y1-y2

distance=math.sqrt(x_slope**2+y_slope**2)
#distance='{:=6.4f}'.format(distance)

#print(f'The euclidean distance between the two points is {distance}.')

print(f"The euclidean distance between the two points is {distance:.4f}.") # Kürzeste Variante!!!

#distance='{:=6.4f}'.format(distance)

#print('The euclidean distance between the two points is',distance,'.')

