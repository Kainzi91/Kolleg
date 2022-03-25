def sumprod(firstvalue,secondvalue):
    menge=0
    for i in range(len(firstvalue)):
        menge+=firstvalue[i]*secondvalue[i]


    return int(menge)
print(sumprod((1,3,4), (9,2,3)))
