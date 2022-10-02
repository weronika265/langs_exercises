from math import sqrt
a, b, c = 1, -12, 35

print('{}x^2 + {}x + {} = 0'.format(a, b, c))

delta = (b ** 2) - (4 * a * c)
if delta > 0:
    x_1 =   (-b - sqrt(delta)) / (2 * a)
    x_2 = (-b + sqrt(delta)) / (2 * a)
    print('x_1 = {}, x_2 = {}'.format(x_1, x_2))
elif delta == 0:
    x_0 = -b / (2 * a)
    print('x_0 = {}'.format(x_0))
else:
    print('Równanie nie ma rozwiązania.')
