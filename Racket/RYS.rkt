#lang racket
(require 2htdp/image)


;elementy dodatkowe
(define slonce
  (above
   (beside (rectangle 95 1 "solid" "cyan") (circle 20 "solid" "lightorange"))
         (rectangle 1 25 "solid" "cyan")))

(define dom
    (above (rectangle 40 6 "solid" "darkbrown")
              (overlay/xy (square 6 "solid" "lightblue")
               -5 -5
               (overlay/xy (square 6 "solid" "lightblue")
                -29 -5
                (overlay/align "center" "bottom"
                           (rectangle 7 10 "solid" "black" )
                           (rectangle 40 20 "solid" "brown"))))))

(define choinka
   (above
      (isosceles-triangle 13 53 "solid" "aquamarine")
      (isosceles-triangle 13 68 "solid" "aquamarine")
      (isosceles-triangle 13 80 "solid" "aquamarine")
      (rectangle 3 6 "solid" "darkbrown")))


;funkcje dodatkowe
(define (kwiatki n)
  (cond
    [(= n 1)
     (above
      (overlay/align "center" "center"
               (circle 1.5 "solid" "yellow")
               (pulled-regular-polygon 8 4 1.7 60 "solid" "red"))
               (rectangle 1 10 "solid" "darkgreen"))]
    [else
     (let ([kwieciscie (kwiatki (- n 1))])
       (beside/align "bottom" kwieciscie kwieciscie))]))


;funkcje
(define (linie n)
  (cond
    [(= n 1)
      (above (rectangle 50 5 "solid" "darkgreen")
             (rectangle 50 5 "solid" "lightbrown"))]
    [else
     (let ([ziemia (linie (- n 1))])
       (beside ziemia ziemia))]))

(define (niebo n)
  (cond
    [(= n 1)
      (rectangle 50 80 "solid" "cyan")]
    [else
     (let ([kawalek_nieba (niebo (- n 1))])
      (beside kawalek_nieba kawalek_nieba))]))

(define (gory1 n)
  (cond
    [(= n 2)
      (let ([x (random 1 10)])
      (triangle (expt x 2) "solid" "black"))]
    [else
      (beside/align "bottom" (gory1 (- n 1)) (gory1 (- n 1)) (gory1 (- n 1)))]))

(define (gory2 n)
  (cond
    [(= n 2)
      (let ([x (random 1 10)])
      (triangle (expt x 2) "solid" "darkgrey"))]
    [else
      (beside/align "bottom" (gory2 (- n 1)) (gory2 (- n 1)) (gory2 (- n 1)))]))

(define (gory3 n)
  (cond
    [(= n 2)
     (let ([x (random 1 10)])
     (triangle (expt x 2) "solid" "lightgrey"))]
    [else
     (beside/align "bottom" (gory3 (- n 1)) (gory3 (- n 1)) (gory3 (- n 1)))]))



;funkcja glowna
(define (obraz [n 4])
(above
 (overlay/align "left" "bottom"
                (beside/align "bottom" choinka dom)
                (overlay/align "center" "bottom"
                            (kwiatki n) (gory1 n) (gory2 n) (gory3 n) slonce (niebo n)))
  (linie n)) )