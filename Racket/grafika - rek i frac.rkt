#lang racket
(require 2htdp/image)

;9
(define (sqr [n 80])
  (if (< n 10)
      (circle 0.5 "solid" "red")
      (overlay/align "center" "center" (square (- n 10) "solid" "blue")
                                       (square n "solid" "black")
                                       (sqr (- n 20)))))

(define (sqr2 [n 10])
  (if (<= n 80)
            (overlay/align "center" "center" (square n "solid" "blue")
                                             (square (+ n 10) "solid" "black")
                                             (sqr2 (+ n 20)))
      (overlay/align "center" "center" (circle 0.5 "solid" "red") (square 10 "solid" "blue"))))

;10
(define (figr [n 10])
  (if (<= n 55)
            (overlay/align "center" "center" (circle n "solid" "orange")
                                             (square (* n 2) "solid" "yellow")
                                             (figr (+ n 15)))
      (overlay/align "center" "center" (circle 0.5 "solid" "red") (circle 5 "solid" "orange"))))

;11


;12


;13
(define (troj_sierp [n 8])
  (if (= n 1)
      (triangle 1 "solid" "red")
      (let ([troj (troj_sierp (- n 1))])
        (above troj (beside troj troj)))))
