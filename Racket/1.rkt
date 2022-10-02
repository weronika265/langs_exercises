#lang racket
(require 2htdp/image)

(define (kw x)  (if (= x 1)
      (rectangle 1 1 "solid" "black")
  (above (beside (kw (/ x 3) ) (kw (/ x 3) ) (kw (/ x 3) ) )
        (beside (kw (/ x 3) ) (rectangle (/ x 3) (/ x 3) "solid" "gray") (kw (/ x 3) ) )
        (beside (kw (/ x 3) ) (kw (/ x 3) ) (kw (/ x 3) ) ) )))

(define r 80)
(define (kolo r)
  (if (< r 1)
      (circle 0.5 "outline" "red")
      (overlay/align "center" "center" (circle r "outline" "red")
                                       (kolo(- r 10)))))
(define x 80)
(define (kwadrat x)
  (if (< x 1)
      (circle 0.5 "outline" "red")
      (overlay/align "center" "center" (rectangle x x "outline" "black")
                                       (kwadrat (- x 10)))))

(define (kwadrat_kolor x)
  (if (< x 1)
      (circle 0.5 "outline" "red")
      (overlay/align "center" "center" (rectangle x x "solid" "blue")
                                       (rectangle (- x 10) (- x 10) "solid" "black")
                                       (kwadrat_kolor (- x 10)))))

(define (fig x)
  (if (< x 1)
      (circle 0.5 "outline" "red")
      (overlay/align "center" "center" (overlay/align "center" "center" (circle x "solid" "orange")
                                       (rectangle (+ x 100) (+ x 100) "solid" "yellow"))
                                       (fig (- x 10)))))

(define (kola x)
  (if (< x 0)
      (circle 2 "outline" "red")
      (beside (circle 2 "solid" "red")
              (kola (- x 1)))))
 (define (w x)
    (if (even? x) (circle 2 "outline" "red")
                  (circle 2 "solid" "red")))


;(define (kw x)  (if (= x 1)
;      (rectangle 1 1 "solid" "black")
;  (above (beside (kw (/ x 3) ) (kw (/ x 3) ) (kw (/ x 3) ) )
;        (beside (kw (/ x 3) ) (rectangle (/ x 3) (/ x 3) "solid" "gray") (kw (/ x 3) ) )
;        (beside (kw (/ x 3) ) (kw (/ x 3) ) (kw (/ x 3) ) ) )))


(define (sierpinski x)
  (if (= x 0) (rectangle 1 1 "solid" "black")
      (let ((a (sierpinski (- x 1))))
      (let ((b (rectangle (image-width a) (image-width a) "solid" "white")))
            (above (beside a a a)
                   (beside a b a)
                   (beside a a a))))))