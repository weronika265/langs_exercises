def make_dict_adder():
    ''' funkcja
        inicjalizuje słownik
        uruchamia funkcję add() przy wywołaniu
        zwraca wynik działania '''
    def add(key, value):
        ''' funkcja
            dodaje element (klucz-wartość) z podanych argumentów do słownika
            zwraca zmodyfikowany słownik '''
        add.dict[key] = value
        return add.dict
    add.dict = {}
    return add


m = make_dict_adder()
print( m('klucz1', 'aaa') )
print( m('klucz2', 'bbb') )

n = make_dict_adder()
print( n('kluczX', 'xxx') )
print( n('kluczY', 'yyy') )