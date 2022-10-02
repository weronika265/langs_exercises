a = 10
def print_global():
    ''' funkcja
        wypisuje zmienną globalną a '''
    print(a)
    
print_global()
    
def shadow_a():
    ''' funkcja
        przypisuje do zmiennej a liczbę 22
        wypisuje ją '''
    a = 22
    print(a)
    
shadow_a()

counter = 1
def increase_counter(n):
    ''' funkcja
        pobiera podaną liczbę z argumentu
        wykorzystuje zmienną globalną counter
        dodaje do zmiennej globalnej counter liczbę podaną w argumencie '''
    global counter
    counter += n

print(counter)
increase_counter(5)
print(counter)
increase_counter(11)
print(counter)