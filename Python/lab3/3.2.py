n, p = 60, 37
# ma działać dla dowolnych n i p (bez input, tylko zmiana zmiennych w kodzie)

# Wypisz dzielniki n
x = [a for a in range(1, n + 1) if n % a == 0]
print('Dzielniki liczby {}: {}'.format(n, x))
# Wypisz dzielniki p
y = [b for b in range(1, p + 1) if p % b == 0]
print('Dzielniki liczby {}: {}'.format(p, y))
