#
# DO UZUPEŁNIENIA
#

def add_to_dict(key, value, dict=None):
    ''' funkcja
        pobiera podany klucz, wartość i opcjonalnie słownik
        jeśli nie podano słownika, tworzy nowy
        dodaje do słownika parę klucz-wartość
        zwraca słownik '''
    if dict == None:
        dict = {}
    dict[key] = value
    return dict



print( add_to_dict(1, 2) )
print( add_to_dict('a', 'b') )
print( add_to_dict('c', 'd', {5: 6}) )
d = {'x': 'y'}
print( add_to_dict(10, 20, d) )
print(d)