x = input()

if x.isdigit():
    print("1")
elif x.isalpha():
    print("A")
else:
    print("#")

#1023 这道题考的照样是ascii码以及分支语句，但是python的话有判断字符串是否为数字或者字母的函数，挺方便的。
