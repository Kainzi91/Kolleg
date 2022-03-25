#!/usr/bin/env python3

"""
This module provides a function to sum all numbers from 0 up to a given integer.
"""


def sum_to(num):
    """
    Sum all numbers from 0 up to a given integer.

    Assert that no negative numbers are entered.
    """
    
    assert num >=0 
    
    sum=0
    for i in range(num+1):
            sum=i+sum 
            
            
    return(sum)


