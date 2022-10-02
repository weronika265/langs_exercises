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
    
class Point:
    "Punkt w trójwymiarowej przestrzeni euklidesowej."
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z
        
    def __repr__(self):
        "zwraca sformatowane parametry punktu"
        return '(%.2f, %.2f, %.2f)' % (self.x, self.y, self.z)
    
    def __sub__(self, vec):
        "odejmowanie wektorów"
        return Vector(self.x - vec.x, self.y - vec.y, self.z - vec.z)
    
    def __add__(self, vec):
        "dodawanie wektorów"
        return Point(self.x + vec.x, self.y + vec.y, self.z + vec.z)
    
    def __iadd__(self, vec):
        "przesunięcie wektora"
        self.x += vec.x
        self.y += vec.y
        self.z += vec.z
        return self
    
    def __eq__(self, point):
        "sprawdza, czy punkty są równe"
        return self.x == point.x and self.y == point.y and self.z == point.z
    
    def __ne__(self, point):
        "sprawdza, czy punkty nie są równe"
        return not self == point

class Triangle:
    "Trójkąt w trójwymiarowej przestrzeni euklidesowej."
    def __init__(self, p1, p2, p3):
        self.p1 = p1
        self.p2 = p2
        self.p3 = p3
        
    def __repr__(self):
        "zwraca sformatowane punkty trójkąta"
        return 'triangle: %s, %s, %s' % (self.p1, self.p2, self.p3)
    
    def perimeter(self):
        "wzraca obwód trójkąta"
        self.n1 = ((self.p2.x - self.p3.x)**2 + (self.p2.y - self.p3.y)**2)**.5
        self.n2 = ((self.p1.x - self.p3.x)**2 + (self.p1.y - self.p3.y)**2)**.5
        self.n3 = ((self.p1.x - self.p2.x)**2 + (self.p1.y - self.p2.y)**2)**.5
        return self.n1 + self.n2 + self.n3
    
    def area(self):
        "zwraca pole trójkąta"
        s = self.perimeter()/2
        a = (s*(s-self.n1)*(s-self.n2)*(s-self.n3))**.5
        return a
    
    def __eq__(self, triangle):
        "sprawdza, czy trójkąty są równe"
        t1, t2 = set(), set()
        points_t1 = [str(self.p1), str(self.p2), str(self.p3)]
        points_t2 = [str(triangle.p1), str(triangle.p2), str(triangle.p3)]
        t1.update(points_t1)
        t2.update(points_t2)
        is_eq = len(t1 & t2)
        return is_eq == 3
    
    def __ne__(self, triangle):
        "sprawdza, czy trójkąty nie są równe"
        return not self == triangle