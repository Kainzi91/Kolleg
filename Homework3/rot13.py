#!/usr/bin/env python3
"""Functions to en-/decode a string using the rot13 algorithm."""

def decode(text):
    return  encode(text)
    
def encode(text):
    import string
    upper_text=text.upper()
    sep_text=list(upper_text)
    decoded_list=[]

    for letter in sep_text:
    
        if letter in set(string.ascii_uppercase[0:13]):
            letter= ord(letter) +13
            letter=chr(letter)
            decoded_list.append(letter)
        
        elif letter in set(string.ascii_uppercase[13:]): 
            letter= ord(letter) -13
            letter=chr(letter)
            decoded_list.append(letter)
        
        else:
            decoded_list.append(letter)
   
    return "".join(decoded_list)

