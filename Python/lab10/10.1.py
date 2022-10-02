class SquaresGen1:
    """Generator kwadratów kolejnych liczb naturalnych.
       Maksymalną liczbę wyrazów określa 'limit'.
    """
    def __init__(self, limit):
        "inicjalizuje licznik na 0 i ustawia limit"
        self.count = 0
        self.limit = limit

    def __iter__(self):
        "Pobiera iterator, który zaczyna się od pierwszego elementu"
        self.count = 0
        return self

    def __next__(self):
        "Zwraca kolejny element ciągu"
        self.count += 1
        if self.count > self.limit:
            raise StopIteration
        return self.count ** 2
    
g = SquaresGen1(20)
print(list(g))
print(list(g))