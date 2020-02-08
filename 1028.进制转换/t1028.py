def dec_bin(num):
    out = []
    if num < 0:
        return "-" + dec_bin(abs(num))
    else:
        while True:
            out.append(str(num % 2))
            num = int(num / 2)
            if num == 0:
                return "".join(out[::-1])

x = int(input())

print(dec_bin(x))

#1028 虽然C++或python有自己的进制转换函数，但是可以自己实现。本题的思路基本是短除法将余数存进字符串，然后将其逆向输出即可。
