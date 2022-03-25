"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
dominator=int(input("Denominator: "))
upper_l=int(input("Upper limit: "))
sum=0
for i in range(upper_l+1):
    if(i%dominator==0):
        sum=i+sum 
        
        

print("Sum: ",sum)

