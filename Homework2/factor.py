"""
.. moduleauthor: <alexander.kainz@bulme.at>
"""

num=int(input("Integer: "))
first_value=num
list=[]
for i in range(2,num):
    while num%i==0:
            list.append(str(i))
            num=num/i
list=" * ".join(list)
print(first_value,"=",list)
