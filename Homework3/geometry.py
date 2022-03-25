#!/usr/bin/env python3
import math
"""Functions calculating characteristic numbers of geometric shapes."""

# TODO: Implement the function body of the following functions.

def perimeter_right_triangle(c1, c2):
    """
    Return the perimeter of a right triangle.

    `c1`, `c2`: catheti of the right triangle
    """
    c3=math.sqrt(c1**2+c2**2)
    perimeter=c1+c2+c3
    return perimeter


def area_right_triangle(c1, c2):
    """
    Return the area of a right triangle.

    `c1`, `c2`: catheti of the right triangle
    """
    area= (c1*c2)/2
    return area 

# TODO: Add and implement the remaining functions.

def perimeter_circle(r): 
    perimeter=2*r*math.pi
    return perimeter

def area_circle(r):
    area=r**2*math.pi
    return area

def surface_sphere(r):
    surface=4*math.pi*r**2
    return surface

def volume_sphere(r):
    volume= ((4/3)*math.pi*r**3)
    return volume

def surface_cylinder(r, h):
    surface=(r**2*math.pi)*2 + 2*r*math.pi*h
    return surface

def volume_cylinder(r, h):
    volume=(r**2*math.pi)*h
    return volume

def surface_cone(r, h):
    s=math.sqrt(r**2+h**2)
    surface=(math.pi*r*s)+(math.pi*r**2)
    return surface

def volume_cone(r, h):
    volume= (1/3)*math.pi*r**2*h
    return volume
