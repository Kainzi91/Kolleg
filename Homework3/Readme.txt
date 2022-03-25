
Equation solver
Write a function quadratic(a, b, c) that solves quadratic equations. If you have trouble solving this task, have a look at the Python functions video tutorial on youtube. In addition to what is shown in the video, the function must be able to deal with input leading to complex numbers as results.
Name the program file: equations.py

Sum
Write a function sum_to(num) that takes an integer num >= 0 as sole argument. The function should return the sum of all positive integers <= num. In the function, assert that the input is ≥ 0 by using assert.
Name the program file: addition.py
Conversion between Celsius and Fahrenheit
Based on the formulas and your code of the second homework, write a function celsius2fahrenheit(.) that converts from Celsius to Fahrenheit and fahrenheit2celsius(.) for the other way around.
Name the program file: conversion.py

Geometry functions
Implement the following functions calculating the perimeters, areas, surfaces or volumes of common gemoetric shapes:
perimeter_right_triangle(c1, c2)
area_right_triangle(c1, c2)
perimeter_circle(r)
area_circle(r)
surface_sphere(r)
volume_sphere(r)
surface_cylinder(r, h)
volume_cylinder(r, h)
surface_cone(r, h)
volume_cone(r, h)
Name the program file: geometry.py

Business functions
Implement a function that returns the terminal value of investing money: terminal_value(capital, rate, years=1, tax=0). If a positive tax value is entered, every year's interest is to be reduced by the tax. The rate and tax parameters must be between 0 (0%) and 1 (100%). The number of years is integral. Use the formulas 
capital∗(1+rate∗(1−tax))years

Implement a second function interest(capital, rate, years=1, tax=0) that returns the profit (compound interest) of investing money.
Name the program file: business.py

ROT13
Building on your solution to the ROT13 task in the last homework, write a function encode(.) that takes a string and returns the given string rotated by 13 places. For symmetry, also provide a corresponding decode(.) function. Convert the input to upper case before performing the rotation.
Arire gehfg n cebtenz lbh qba'g unir fbheprf sbe.
Name the program file: rot13.py

VRPTW instances
Write a function read_string_list(.) that opens a VRPTW data file given as filename argument. The argument must be optional and default to "r101"). If the argument doesn't contain a filename extension (".txt"), this extension must be added before opening the file. Your function should return a list of strings - one for each entry. The headers should not be included in that list.
A sample execution of this function:
>>> read_string_list('r101.txt')
['  1    35.00    35.00     0.00     0.00   230.00     0.00\n',
 '  2    41.00    49.00    10.00   161.00   171.00    10.00\n',
...
 '100    20.00    26.00     9.00    83.00    93.00    10.00\n',
 '101    18.00    18.00    17.00   185.00   195.00    10.00\n']
Name the program file: vrptw_reader.py

More on VRPTW instances
Expand the file of the last task to include more functions. The second function get_demand(.) takes two arguments. The first argument should be a list of strings (one for each entry) and the second should be a customer number (CUST_NO.). The function has to return that customer's demand as floating point number. The last function, calc_distance(.), should take three parameters – a list of strings and two customer numbers. It should return the euclidean distance between the two customers.
Name the program file: vrptw_reader.py

Main function
Write a single module that imports all the other modules you wrote for this homework. In the module implement a main function that uses all the functions you created. This main function is a first attempt of testing your code in the other modules. For each of the other tasks, create valid input data and deduce the functions output. Print these values, followed by the actual values the function produces for these inputs. Here's an example line this function could contain:
def main():
    # ...
    print('prime_addition.prime_sum_to(9); expected: 17, actual:',
          prime_addition.prime_sum_to(9))
    # ...
The main function must be called itself using the ifmain pattern. If all went well, the main function must return 0 to inform the calling process of the successful termination. Name the program file: main.py
