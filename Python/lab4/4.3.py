import re

# Funkcje pomocnicze

def _words_from_line(line):
    "Zwraca listę słów dla linijki tekstu unicode."
    words = re.split('[\W\d]+', line)
    return [w.lower() for w in words if w]

def _sort_stat(stat):
    "Sortuje malejąco listę par według drugiego elementu."
    return sorted(stat, key=lambda p: p[1], reverse=True)

# Rozwiązanie

def word_stat(filename):
    '''
    Zwraca posortowaną malejąco statystykę wystąpień słów
    w pliku w postaci listy par (słowo, liczba).
    '''

    dict = {}
    with open(filename, 'r', encoding = 'utf-8') as f:
        for line in f:
            words_in_line = _words_from_line(line)
            
            for word in words_in_line:
                if word in dict:
                    dict[word] += 1
                else:
                    dict[word] = 1
                    
        keys = dict.keys()
        values = dict.values()
        lst = _sort_stat(tuple(zip(keys, values)))
    return lst

file = input('Podaj nazwę pliku: ')
print(word_stat(file))
