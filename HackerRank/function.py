def is_leap(year):
    leap = False
    
    # Write your logic hedef is_leap(year):
    if (year%4==0):
        leap = True
        if(year%100 ==0):
            leap=False
            if(year%400==0):
                leap=True
    return leap


