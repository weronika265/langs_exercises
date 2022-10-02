def onp(str):
    ''' Funkcja oblicza ciąg podanych wyrażeń jako Odwrotną Notację Polską.
        Zabiera na stos liczby i kiedy napotka znak, zabiera ze stosu dwie ostatnie liczby. 
        Wykonuje na nich działania, a ten wynik zwraca na stos.
        W trakcie wypisuje działania na wyraażeniu.
        Zwraca wynik działania. '''
    wyrazenie = []
    for l in str.split():
        wyrazenie.append(l)
        
    stos = []
    while wyrazenie != []:
        print('wyrażenie: %s' % wyrazenie)
        print('stos: %s' % stos)
        val = wyrazenie.pop(0)
        if val in ['+', '-', '*', '/']:
            a = stos.pop()
            b = stos.pop()
            if val == '+':
                wynik = b + a
            elif val == '-':
                wynik = b - a
            elif val == '*':
                wynik = b * a
            elif val == '/':
                wynik = b / a
            stos.append(wynik)
            print('zdjęty element: "%s" wynik operacji: "%s%s%s" trafia na stos\n' % (val, b, val, a))
        else:
            stos.append(int(val))
            print('zdjęty element: "%d" trafia na stos\n' % int(val))
    return stos.pop()

print( onp('2 3 + 5 *') )
print('\n-----------------------------------\n')
print( onp('5 7 + 3 / 12 6 - 4 * + 2 /') )