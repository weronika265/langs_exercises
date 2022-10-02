import re

# Funkcje pomocnicze

def _words_from_line(line):
    "Zwraca listę słów dla linijki tekstu unicode."
    words = re.split('[\W\d]+', line)
    return [w.lower() for w in words if w]

# Rozwiązanie

def unique_words(filename):
    "Zwraca posortowaną alfabetycznie listę wszystkich słów z pliku."
    wordset = set()

    with open(filename, 'r', encoding = 'utf-8') as f:
        for line in f:
            words = _words_from_line(line)
            wordset.update(words)
    set_to_list = list(wordset)
    return sorted(set_to_list)
    
# uruchom funkcję unique_words()
lst = unique_words('wiki_small.txt')
print(lst)
