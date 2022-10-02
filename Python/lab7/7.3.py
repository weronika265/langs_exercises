# funkcja lambda skraca program, umożliwiając filtrowanie listy w "jednej linii" i go upraszcza, ponieważ
# nie musimy stosować żadnych pętli. Mamy także znacznie większą swobodę w wyborze
# parametrów: przesyłamy je przez funkcję i zostają przetworzone przez wyrażenie lambda
lst = [3, 6, 2, 89, -67, 20]
def filter_list(lst, limit):
    ''' funkcja
        filtruje podaną listę po ustawionym limicie
        zwraca listę liczb większych od limitu '''
    filtered = list(filter(lambda x: x > limit, lst))
    return filtered

print(filter_list(lst, 5))

print('- - - - -')

# wyrażenie lambda skraca zapis w stosunku do list comprehension, a umieszczona
# w funkcji pozwala na dużą swobodę w modyfikacji parametrów
def multiply(mp = 1, min = 1, max = 10):
    ''' funkcja
        mnoży przedział liczb (podanych przez użytkownika lub domyślnych) przez podaną liczbę
        zwraca ich listę '''
    return list(map(lambda x: x * mp, range(min, max)))

print(multiply())
print(multiply(2))
print(multiply(3, 5))
print(multiply(4, 5, 8))