def fib_gen():
    ''' funkcja
        inicjalizuje dwie początkowe liczby ciągu Fibonacciego
        "zawiesza" działanie w momencie obsługi kolejnej liczby z ciągu, będącą gotową do wyświetlenia
        przechodzi do kolejnej liczby i oblicza następną (suma dwóch poprzednich  liczb) '''
    fib1, fib2 = 0, 1
    while True:
        yield fib1
        fib1, fib2 = fib2, fib1 + fib2

f = fib_gen()

# next(f)
#0

# next(f)
#1

# next(f)
#1

# next(f)
#2

# next(f)
#3

# next(f)
#5

# next(f)
#8

# next(f)
#13
