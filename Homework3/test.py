#!/usr/bin/env python3

"""Functions for reading and working with VRPTW text input files."""
def read_string_list(filename="r101.txt"):
    
    contents=[]

    if filename.count(".txt") ==0 :
        filename=filename+".txt"
    
    with open(filename) as file:
        contents=file.readlines()

    contents.pop(0)
    return contents

read_string_list()

def get_demand(stringlist,co_nu):
    
    line_string=[]
    co_nu=str(co_nu)

    for line in stringlist:
        sep_line=line.split(" ") 
        sep_line_counter=sep_line.count("")
        for i in range(sep_line_counter):
            sep_line.remove('') 
        if sep_line[0]==co_nu:
            line_string.append(sep_line)
    line_string=line_string[0]

    return float(line_string[3])

print(get_demand(read_string_list(), 4))
print(get_demand(read_string_list(),5 ))
def calc_distance(stringlist,co1,co2):
    
    import math 

    line_string=[]
    str_co_nu1=str(co1)
    str_co_nu2=str(co2)
    for line in stringlist:
        line=line.split()
        if line[0]==str_co_nu1 or line[0]== str_co_nu2:
            line_string.append(sep_line)
   
    print(line_string)
    """ 
    customer1=line_string[0]
    customer2=line_string[1]

    x1=float(customer1[1])
    x2=float(customer2[1])
    y1=float(customer1[2])
    y2=float(customer2[2])
    
    x_slope=x1-x2
    y_slope=y1-y2
    """
    return 0

print(calc_distance(read_string_list("r102.txt"), 4, 5))

