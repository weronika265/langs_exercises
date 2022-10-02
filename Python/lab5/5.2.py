def czy_pierwsze(x):
    "Wypisuje liczby od 2 do x. Określa czy są pierwsze czy złożone (i z jakich pierwszych się składają)."
    for i in range(2, x + 1):
        if i != 1 and all(i % j for j in range(2, i)):
            # print(f"{i} liczba pierwsza")
            print(str(i) + " liczba pierwsza")
        else:
            divisor = 2
            prime_factors = []
            num = i
            
            while num > 1:
                if num % divisor == 0:
                    prime_factors.append(divisor)
                    num /= divisor
                else:
                    divisor += 1
                    
            list_to_string = '*'.join(map(str, prime_factors))
            # print(f"{i} liczba złożona: {list_to_string}")
            print(str(i) + " liczba złożona: " + list_to_string)
                    
                
czy_pierwsze(8)