class Vector:
    "Wektor w trójwymiarowej przestrzeni euklidesowej."
    def __init__(self, x, y, z):
        self.x = float(x)
        self.y = float(y)
        self.z = float(z)

    def __repr__(self):
        "zwraca sformatowane parametry wektora"
        return '[%.2f, %.2f, %.2f]' % (self.x, self.y, self.z)

    def __add__(self, vec):
        "suma: self + vec"
        return Vector(self.x + vec.x, self.y + vec.y, self.z + vec.z)
    
    def __mul__(self, vec):
        "iloczyn skalarny wektora"
        return self.x * vec.x + self.y * vec.y + self.z * vec.z

    ## def __iadd__(self, vec):
    ##     "suma: self += vec"
    ##     self.x += vec.x
    ##     self.y += vec.y
    ##     self.z += vec.z
    ##     return self

    def __eq__(self, vec):
        "sprawdza, czy wektory są równe"
        return self.x == vec.x and self.y == vec.y and self.z == vec.z

    def __ne__(self, vec):
        "sprawdza, czy wektory nie są równe"
        return not self == vec
    
    def norm(self):
        "norma (długość) wektora"
        print((self.x**2 + self.y**2 + self.z**2)**.5)
    # ??    
    def __bool__(self):
        "sprawdza, czy norma jest niezerowa"
        return bool((self.x**2 + self.y**2 + self.z**2)**.5)