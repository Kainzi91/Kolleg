"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
temperatur=-16    

while temperatur!=35:
    temperatur=temperatur+1
    celsius=temperatur

    fahrenheit=celsius/(5/9)+32
    #celsius='{:=6.2f}'.format(celsius)
    fahrenheit= round(fahrenheit,2)
    
    print(celsius, "C =>", fahrenheit,"F")

    #text="{celsius} C =>{fahrenheit} F"
    #print(text.format(celsius=celsius,fahrenheit=fahrenheit))
