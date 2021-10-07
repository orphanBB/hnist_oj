import math

t = float(input())
grade = ord('E') - 1

if t < 60:
    print("E")
elif t < 100:
    print(chr(grade - math.floor((t - 60) / 10)))
else:
    print("A")

#1021 这道题本意应该是考一个分支结构，但是可以简化一下来结合ascii码的运用。
#     首先直接判断60分以下直接不及格，再来往上看，60分以上每上10分，等级提一级，则输出的ascii码比‘E’少1，即可直接输出60~99分的对应等级。
#     最后不要忘记100分。
