str = input()
str2 = ""

for i in range(len(str)):
    str2 += chr(ord(str[i]) + 2)

print(str2)

#1014 考的是一个ascii与字符关系的理解，而且限制了字符串长度，差不多算水题。。。
