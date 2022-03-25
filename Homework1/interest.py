"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""


zins=float(input("Enter the fixed interest rate in percent: " ))
investamount=float(input("Enter the amount of money you want to invest: " ))
years=int(input("Enter the number of years the money will be invested: "))

gewinn=float((investamount*(1+zins/100)**years)-investamount)


print(f"The earned interest is {round(gewinn,2)}.")
print(f"The terminal value amounts to {round(investamount+gewinn,2)}.")
