def complicated():
    ''' funkcja complicated()
        przypisuje do zmiennej x liczbę 5
        uruchamia funkcję f1() '''
    x = 5
    def f1():
        ''' funkcja f1()
            przypisuje do zmiennej x liczbę 6
            uruchamia funkcję f2() -> 6
            przypisuje do zmiennej x liczbę 7
            uruchamia funkcję f3() -> nic się nie wykonuje (w funkcji zmienia się jedynie lokalna wartość zmiennej x)
            uruchamia funkcję f2() -> 7 '''
        
        def f2(): 
            ''' funkcja f2()
                wypisuje wartość zmiennej x '''
            print(x)
            
        x = 6
        f2()
        x = 7
        
        def f3():
            ''' funkcja f3()
                przypisuje do zmiennej x liczbę 8 (lokalnie, wartość ta jest dostępna jedynie w tej funkcji) '''
            x = 8
            
        f3()
        f2()
    f1()

# uruchomienie funkcji
complicated()