year = int(input())

if ((year % 100) and not(year % 4)) or (not(year % 100) and not(year % 400)):
    print("yes")
else:
    print("no")

#1033 水题，考他妈的生活常识。
