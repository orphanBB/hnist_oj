a1, a2, a3, a0, x = map(float, input().split())

print("{:.2f}".format(a1 * (x ** 3) + a2 * (x ** 2) + a3 * x + a0))

#1017 照常水题，列个算式的事，但需要注意的是，c++语言的cmath库中提供的幂函数pow(double base,double exp)有个小坑，它的参数其实是浮点型。所以使用整数的时候最好后面加个.0，以免不必要的错误。
