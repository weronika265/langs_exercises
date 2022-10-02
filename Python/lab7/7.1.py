def call(function, *args, **kw_args):
    ''' funkcja
        pobiera wybraną funkcję i podane do niej argumenty
        zwraca wynik pobranej funkcji '''
    return function(*args, **kw_args)

print( call(max, [4, -1, 3]) )

print( call(max, 4, -5, 3, key=lambda x: abs(x)) )

print( call(sorted, [1, 3, 2], reverse=True) )

# suma liczb z przedziału <1, 5)
print( call(sum, [x for x in range(1, 5)] ) )

# wypisywanie najdłuższego słowa
print( call(max, 'Ann', 'Alex', 'Claire', 'Joannie', key = lambda x: len(x)) )