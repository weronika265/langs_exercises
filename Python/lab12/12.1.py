def wojna(karty1, karty2):
    ''' Funkcja symuluję grę w wojnę.
        wypisuje kolejne działania uczestników
        zwraca numer rundy, na której zakończyła się gra '''
    runda = 0
    wygrany = 1
    # while True:
    while not(karty1 == [] or karty2 == []):
        runda += 1
        # print(f"runda: {runda}")
        print('runda: %d' % runda)
        print('ręka gracza 1: %s' % karty1)
        print('ręka gracza 2: %s' % karty2)
        
        k1 = karty1.pop(0)
        k2 = karty2.pop(0)
        
        print('gracz 1 rzuca: %d' % k1)
        print('gracz 2 rzuca: %d' % k2)
        
        print('pozostała ręka gracza 1: %s' % karty1)
        print('pozostała ręka gracza 2: %s' % karty2)
        
        if k1 > k2:
            wygrany = 1
            karty1.append(k1)
            karty1.append(k2)
        else:
            wygrany = 2
            karty2.append(k2)
            karty2.append(k1)
        print('wygrywa gracz: %d \n' % wygrany)
        
    return runda

print('rund rozgrywki:', wojna([1,4,6], [2,3,5]) )

print('\n---------------------------------------\n')

print('rund rozgrywki:', wojna([1,8,7,5], [2,4,3,6]) )