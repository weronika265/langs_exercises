def wyliczanka(dzieci, krok):
    ''' Funkcja pobiera informacje o dzieciach i krok, w którym dziecko odpada
        dopóki nie zostanie więcej niż dwójka dzieci, eliminowane są kolejne dzieci
        wypisane zostaje dziecko, które wygrało '''
    count = 1
    while len(dzieci) >= 2:
        for i in range(0, len(dzieci)):
            if count == krok:
                dzieci[i] = 'x'
            count += 1
            if count > krok:
                count = 1
        print(dzieci)
        
        n = len(dzieci)
        j = 0
        while j < n:
            if dzieci[j] == 'x':
                dzieci.pop(j)
                n -= 1
            j += 1
            
    winner = list(filter(lambda i: isinstance(i, int), dzieci))
    print(winner[0])

dzieci = [1, 2, 3, 4, 5, 6, 7, 8]
krok = 3
wyliczanka(dzieci, krok)
print('')
dzieci = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
krok = 4
wyliczanka(dzieci, krok)