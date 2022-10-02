#lang racket
(define (add-to-end lst e) 
   (if (null? lst) 
       (list e)
       (cons (car lst)
             (add-to-end (cdr lst) e))))

;(define (double x) (* 2 x))
;(define (twice fn x) (fn(fn x)))
;(twice double 2)

;(define (swap-2-3 lst)
;  (list (car lst)
;        (caddr lst)
;        (cadr lst)))

;(define (twice fn x)
;  (fn (fn x)))
;(define (double x)
;  (* x x))
;(define (powr4 x)
;  (twice double x))

;(define (sum-of-squares x y)
;  (define (square a)
;    (* a a))
;  (define (sum b c)
;    (+ b c))
;  (sum (square x) (square y)))
;
;(define (is-equal x y)
;  (define (print-error)
;    (display x)
;    (display " not equal ")
;    (display y)
;    (newline))
;  (if (not (equal? x y)) (print-error) null))
;
;(define (add-one)
;  (define (add x) (+ x 1))
;  add)
;(define ret (add-one))
;
;(define value 5)
;(set! value (+ value 1))
;
;(define (my-map fn lst)
;  (if (empty? lst) null
;      (cons (fn (car lst)) (my-map fn (cdr lst)))))

;23 wiecej niz jeden x
;(define (rem lst x)
;    (remove x lst))

;(define (insertNoDups element lst)
;  (cond
;    [(empty? lst) (cons element lst)]
;    [(= element (first lst)) lst]
;    [else (cons (first lst) (insertNoDups element (rest lst)))]))

;(define (remove-dups lst)
;  (cond
;    [(empty? lst) empty]
;    [else (insertNoDups (first lst) (remove-dups (rest lst)))]))