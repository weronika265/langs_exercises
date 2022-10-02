#lang racket
;1 display name
"Weronika"

;2 substract PI
(- pi 3.14)

;3 calculate result
(* (+ 2 2) (/ (* (+ 3 5) (/ 30 10)) 2))

;4 calculate result
(- (* (+ 2 1)3) (* (+ 7 4) 4))

;5 calculate result
(/ (+ (/ (+ 2 7) 3) (* (- 14 3) 4)) 2)

;6 check if tautology
(define p #f)
(define q #f)
(implies (and (or p q) (implies p q)) (implies q p) )

;7 check if tautology
(define p #t)
(define q #t)
(define r #t)
(implies (implies (or p q) r) (or (implies p r) (implies q r)) )

;8 check if tautology
(define p #t)
(define q #t)
(eqv? (not (and p q)) (or (not p) (not q)) )

;9 add 1
(define (add x)
    (+ x 1))

;10 calc cube
(define (szescian x)
   (expt x 6))

;11 mult str 3 times
(define (expand x)
     (string-append x x x))

;12 fn roots
(define (pierw a b c)
    (if (eq? a 0) "Error"
       (let ((det (- (* b b) (* 4 a c))))
           (if (negative? det) "Error"
               (let ((a2 (+ a a)))
               (if (zero? det) (/ (- b) a2)
                   (let ((root (sqrt det)))
                   (list (/ (+ (- b) root) a2)
                         (/ (- (- b) root) a2)))))))))

;13 check num
(define (gt_5 x)
    (if (eq? x 5) "liczba rowna 5"
       (if (> x 5) "liczba wieksza niz 5" "liczba mniejsza niz 5") ) )

;14 var type
(define (type x)
    (if (string? x) "slowo"
        (if (number? x) "liczba" "inne")) )

;15 str diff
(define (str_dif x y)
    (- (string-length x) (string-length y)) )

;16 min
(define (min x y z)
    (if (< x y)
        (if (< x z) x
            (if (< y z) y z))
    (if (< y z) y z)) )

;17 min_max
(define (min a b c d)
    (let ((max1 (if (> a b) a b)))
      (let ((max2 (if (> c d) c d)))
        (if (< max1 max2) max1 max2))) )

;18 factorial
(define (silnia x)
    (if (= x 0) 1
        (* x (silnia(- x 1)))) )