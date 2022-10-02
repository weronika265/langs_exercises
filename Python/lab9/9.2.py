def get_values(i, n):
    ''' funkcja inicjalizuje pustą listę
        dodaje do listy następne elementy z iteratora 
        jeśli napotka brak następnej wartości, przerywa działanie
        zwraca listę '''
    lst = []
    for j in range(0, n):
        val = next(i, None)
        if val == None:
            break
        lst.append(val)
    return lst

i = iter(range(10))
print( get_values(i, 3) ) #[0, 1, 2]
print( get_values(i, 5) ) #[3, 4, 5, 6, 7]
print( get_values(i, 4) ) #[8, 9]
print( get_values(i, 4) ) #[]