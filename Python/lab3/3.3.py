limit = 100
numbers = range(1, limit+1)

# Zastąp pustą listę wyrażeniem zwracającym liczby pierwsze z zakresu od 1 do 'limit'
primes = [i for i in numbers if i != 1 and all(i % j for j in range(2, i))]

print('Liczby pierwsze od 1 do %d: %s' % (limit, primes))
