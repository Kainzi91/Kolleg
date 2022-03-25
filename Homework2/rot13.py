
import string

filename=input("File to decode: ")



with open(filename,"r") as file:
    my_list=file.read()

my_list=my_list.upper()
decoded_list=[]
#my_list="a"

for letter in my_list:
    
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

print("".join(decoded_list))


    
    
