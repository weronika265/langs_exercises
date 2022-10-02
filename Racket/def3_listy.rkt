#lang racket
(require 2htdp/image)
;1_item_list
(list "chleb" "kielbasa" "maslo" "mleko" "salata")

;2 div_3_5_7
(define (podzielna2 x)
  (cond
    [(= (remainder x 105) 0) "podzielna przez 3, 5 i 7"]
    [(= (remainder x 15) 0) "podzielna przez 3 i 5"]
    [(= (remainder x 35) 0) "podzielna przez 5 i 7"]
    [(= (remainder x 21) 0) "podzielna przez 3 i 7"]
    [(= (remainder x 3) 0) "podzielna przez 3"]
    [(= (remainder x 5) 0) "podzielna przez 5"]
    [(= (remainder x 7) 0) "podzielna przez 7"]
    [else "inna"]))

;3 graphics
(define (grafika)
  (let ([x (random 3)])
    (cond
      [(= x 0) (circle 30 "outline" "red")]
      [(= x 1) (square 50 "solid" "lightblue")]
      [(= x 2) (triangle 60 "solid" "green")])))

;4 check if tautology
;zmien wartosci zmiennych, aby sprawdzic inne przypadki
(let ([p #f] [q #f])
(implies (and (or p q) (implies p q)) (implies q p) ))

(let ([p #t] [q #t] [r #t])
(implies (implies (or p q) r) (or (implies p r) (implies q r)) ))

(let ([p #t] [q #t])
(eqv? (not (and p q)) (or (not p) (not q)) ))

;5 factorial
(let silnia([n 3])
  (if (= n 0) 1
      (* n (silnia(- n 1)))))

;6 draw fractal
(let fractal ([x 4])
  (if (<= x 0) (square 4 "solid" "black")
      (let ((a (fractal(- x 1))))
        (let ((b (circle 6 "solid" "red")))
        (beside a a b)))))

;7 fib seq
(define (fib x)
  (cond
    [(= x 0) 0]
    [else
  (if (< x 3) 1
      (+ (fib (- x 1)) (fib (- x 2))))]))

;8 list elems sum
(define (sum lst)
  (if (empty? lst) 0
      (+ (car lst) (sum (cdr lst)))))

;9 list mean
(define (avg lst)
  (/ (apply + lst) (length lst)))

;10 last elem
(define (zwroc_ostatni lst)
  (if (empty? lst) null
  (last lst)))

;11 remove selected elem
(define (delete lst x)
  (if (empty? lst) empty
  (filter (lambda (a) (not(equal? x a))) lst)))

;12 remove negative nums
(define (only-positive lst)
(filter positive? lst))

;13 standard deviation
(define (odchyl_std lst)
  (define (srednia lst)
    (/ (apply + lst) (length lst)))
   (define (wariancja lst sred)
     (if (null? lst) 0
         (+ (* (- (car lst) sred)
               (- (car lst) sred))
            (wariancja (cdr lst) sred))))
  (sqrt (/ (wariancja lst (srednia lst)) (length lst))))

;14 find min elem
(define (min lst)
  (cond
    [(empty? (cdr lst)) (car lst)]
    [(if (< (car lst) (min (cdr lst)))
         (car lst)
         (min (cdr lst)))]))
        
;15 reverse list
(define (rev lst)
  (if (null? lst) '()
      (append (rev (cdr lst)) (list (car lst)))))

;16 create string
(define (powitanie s)
  (cond
    [(equal? s "hej")
      "hej!"]
    [(equal? s "przepraszam")
      "nie mam czasu!"]
    [else "nie rozumiem..."]))

;17 penultimate elem
(define (przedostatni lst)
  (cond
    [(empty? lst) empty]
    [(null? (cdr lst)) (car lst)]
    [else
     (first (rest (reverse lst)))]))

;18 num of elems greater than 5
(define (am_gt_5 lst)
  (length (filter (lambda (x) (> x 5))
  lst)))

;19 num of elems greater than 0, smaller than 10
(define (am-0-10 lst)
  (length (filter (lambda (x) (and (> x 0) (< x 10)))
  lst)))

;20 elems greater than 5
(define (gt_5 lst)
  (filter (lambda (x) (> x 5))
  lst))

;21 elems greater than 0, smaller than 10
(define (0-10 lst)
  (filter (lambda (x) (and (> x 0) (< x 10)))
  lst))

;22 add unique elem
(define (unique x lst)
  (cond
    [(empty? lst) (cons x lst)]
    [(= x (car lst)) lst]
    [else
     (cons (car lst) (unique x (cdr lst)))]))

;23 remove selected elem from list
(define (del lst x)
  (cond
    [(empty? lst) empty]
  [else
    (if (equal? (car lst) x)
      (del (cdr lst) x)
      (cons (car lst) (del (cdr lst) x)))]))

;24 remove elems smaller than 5
(define (del<5 lst)
  (cond
   [(empty? lst) empty]
   [(not (pair? lst)) lst]
   [else
     (if (< (car lst) 5)
       (del<5(cdr lst))
       (cons (car lst) (del<5(cdr lst))))]))

;25 calc list length
(define (el-count lst)
  (if (empty? lst) 0
    (+ 1 (el-count (rest lst)))))

;26 merge 2 lists w/o duplicates
(define (scal lst1 lst2)
  (remove-duplicates (append lst1 lst2)))