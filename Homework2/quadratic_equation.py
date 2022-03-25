"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""
import cmath

a = float(input("a: "))
b = float(input("b: "))
c = float(input("c: "))

q = cmath.sqrt(b**2 - 4 * a * c)
x1 = (-b + q) / (2*a)
x2 = (-b - q) / (2*a)

x1=round(x1.real,2)+ round(x1.imag,2)*1j
x2=round(x2.real,2)+ round(x2.imag,2)*1j

print (f"x1: {x1:.2f} x2: {x2:.2f}")

