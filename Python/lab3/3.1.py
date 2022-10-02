from math import sqrt
# a
a = int(input('a: '))
# b
b = int(input('b: '))
# c
c = int(input('c: '))

delta = (b ** 2) - (4 * a * c)          # zastąp zero wzorem na deltę
#x_1 = (-b - sqrt(delta)) / (2 * a)      # zastąp zero wzorem na rozwiązanie nr 1
#x_2 = (-b + sqrt(delta)) / (2 * a)      # zastąp zero wzorem na rozwiązanie nr 2

# Wypisz równanie
print('Równanie {}x^2 + {}x + {} = 0'.format(a, b, c))

# Wypisz rozwiązania
if delta > 0:
    x_1 = (-b - sqrt(delta)) / (2 * a)
    x_2 = (-b + sqrt(delta)) / (2 * a)
    print('Rozwiązania: x_1 = {:.2f}, x_2 = {:.2f}'.format(x_1, x_2))
elif delta == 0:
    x_0 = -b / (2 * a)
    print('Rozwiązanie: x_1 = x_2 = {:.2f}'.format(x_0))
else:
    print('Rozwiązania: brak')
