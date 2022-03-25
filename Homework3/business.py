#!/usr/bin/env python3

"""This module offers simple functions for interest calculation."""

def terminal_value(capital,rate, years=1,tax=0):
    assert 0<=tax<=1 ,"Tax has to be between 0 an 1" 
    assert 0<=rate<=1 ,"Rate has to be between 0 an 1"
    return capital*(1+rate*(1-tax))**years

def interest(capital, rate, years=1, tax=0):
    assert 0<=tax<=1 ,"Tax has to be between 0 an 1" 
    assert 0<=rate<=1 ,"Rate has to be between 0 an 1"
    return (capital*(1+rate*(1-tax))**years)-capital