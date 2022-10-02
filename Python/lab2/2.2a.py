from math import sqrt
a, b, c = 1, -12, 35
# ma działać dla dowolnych a, b, c, dla których istnieją rozwiązania 
# (int i float - bez inputa, wpisywane w kodzie)

delta = (b ** 2) - (4 * a * c)          # zastąp zero wzorem na deltę
x_1 = (-b - sqrt(delta)) / (2 * a)      # zastąp zero wzorem na rozwiązanie nr 1
x_2 = (-b + sqrt(delta)) / (2 * a)      # zastąp zero wzorem na rozwiązanie nr 2

# Wypisze równanie
print('{}x^2 + {}x + {} = 0'.format(a, b, c))

# Wypisze rozwiązania
print('x_1 = {}, x_2 = {}'.format(x_1, x_2))
