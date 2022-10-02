def czy_parzyste(x, y):
    "Wypisuje liczby od x do y. Określa czy są parzyste czy nie."
    for i in range(x, y + 1):
        if i % 2 == 0:
            # print(f"{i} parzysta")
            print(str(i) + " parzysta")
        else:
            # print(f"{i} nieparzysta")
            print(str(i) + " nieparzysta")
  

czy_parzyste(1, 4)