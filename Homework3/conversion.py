"""
This module provides functions to convert between Celsius to Fahrenheit.
"""


def celsius2fahrenheit(celsius):
    """Convert a temperature given in Celsius to Fahrenheit."""
    fahrenheit=celsius/(5/9)+32
    return fahrenheit

def fahrenheit2celsius(fahrenheit):
    """Convert a temperature given in Fahrenheit to Celsius."""
    celsius=(fahrenheit-32)*(5/9)
    return celsius
