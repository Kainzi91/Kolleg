"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
import math


print("radians |  sine | tangent")
print("-------------------------")
i=0.0
while i<math.pi:
    
    tan='{:>7}'.format(round(math.tan(i),2))
    sin='{:>5}'.format(round(math.sin(i),2))
    
    print( "   ",round(i,2),"|", sin,"|",tan )
    i=i+0.1

print("  ", round(math.pi,2),"|  ", round(math.sin(math.pi),2),"|   ",round(math.tan(math.pi),2) )


