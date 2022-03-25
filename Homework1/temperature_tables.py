"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""

"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
einheit=input("For C => F enter C, for F => C enter F: -20 C => -4.0 F\n")




if einheit=="C":
    temperatur=-20

    while temperatur!=40:
        temperatur=temperatur+1
        celsius=temperatur

        fahrenheit=celsius/(5/9)+32
        

        fahrenheit=round(fahrenheit,1)
        
        print(celsius,"C =>", fahrenheit,"F")



elif einheit=="F" :


    temperatur=-11  
    while temperatur!=110:
        temperatur=temperatur+1
        fahrenheit=temperatur
        celsius=(fahrenheit-32)*(5/9)
        
        celsius='{:=6.1f}'.format(celsius)
        
        print(fahrenheit," F =>",celsius,"C" )

else:
    print("Temperaturangabe ungültig")
    
   

