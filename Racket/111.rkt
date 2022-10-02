#lang racket
(require 2htdp/image)

;nowa wersja

;elementy
(define ziel                             ;zielony kolor linii
  (rectangle 90 5 "solid" "darkgreen"))

(define braz                             ;brazowy kolor linii
  (rectangle 90 5 "solid" "lightbrown"))

(define tlo                              ;niebo
  (rectangle 90 80 "solid" "cyan"))

(define (trojkat_b)                      ;losowy trojkat czarny   ;;trojkaty - znalezc "sweet spot"
(let ([x (random 2 8)])
  (triangle (expt x 2) "solid" "black")))

(define (trojkat_g)                      ;losowy trojkat szary
(let ([x (random 1 10)])
  (triangle (expt x 2) "solid" "darkgrey")))

(define (trojkat_w)                      ;losowy trojkat "bialy"
(let ([x (random 1 10)])
  (triangle (expt x 2) "solid" "lightgrey")))

(define (niebo n)                        ;rysowanie nieba
  (if (< n 1)
      tlo
      (beside (niebo (- n 2)) (niebo (- n 2)))))


;elementy dodatkowe
(define kwiat                                              ;;wsadzic elementy dodatkowe i stworzyc nowe
(above (overlay/align "center" "center"
               (circle 8 "solid" "yellow")
(pulled-regular-polygon 30 4 1.7 60 "solid" "red"))
               (rectangle 3 33 "solid" "darkgreen")))

(define slonce
  (circle 20 "solid" "lightorange"))

(define dom
  (above (rectangle 50 10 "solid" "darkbrown") (overlay/xy (square 10 "solid" "lightblue")
            -5 -5
(overlay/xy (square 10 "solid" "lightblue")
            -35 -5
            (overlay/align "center" "bottom"
              (rectangle 10 15 "solid" "black" )
              (rectangle 50 30 "solid" "brown"))))))

;funkcje
(define (linie n)                        ;rysowanie obu linii
  (if (< n 1)
      (above ziel braz)
      (beside (linie (- n 2)) (linie (- n 2)))))

(define (gory1 n)                        ;rysowanie gor czarnych
  (if (< n 2)
      (trojkat_b)
      (beside/align "bottom" (gory1 (- n 1)) (gory1 (- n 1)))))

(define (gory2 n)                        ;rysowanie gor szarych
  (if (< n 2)
      (trojkat_g)
      (beside/align "bottom" (gory2 (- n 1)) (gory2 (- n 1)))))

(define (gory3 n)                        ;rysowanie gor "bialych"
  (if (< n 2)
      (trojkat_w)
      (beside/align "bottom" (gory3 (- n 1)) (gory3 (- n 1)))))

;(define (gory n)                        ;rysowanie wszystkich gor bez dodatkowych funkcji (3 powyzej), na ten moment nie dziala
;  (if (= n 1)
;      (overlay/align "center" "bottom"
;      ((trojkat_b) (trojkat_g) (trojkat_w)))
;      (beside/align "bottom" (gory (- n 1)) (gory (- n 1)))))


;funkcja glowna
(define (obraz n)                        ;;trzeba ograniczyc dlugosc, tu mi przychodzi do glowy uzycie tych or i and. W tej wersji da sie spokojnie obejsc bez or
  (cond                                  ;;ogarnac glownie przypadek n = 4, 5: krotsze "boki", moze trzeba zrobic cos z siel, braz i niebo oraz funkcjami ich dotyczacymi lub tutaj dodac przypadek, gdzie np. -3
    [(or (= n 4) (and (> n 3) (< n 5)))
     (above
     (overlay/align "center" "bottom"
                    (gory1 (- n 0.5)) (gory2 (- n 0.5)) (gory3 (- n 0.5)) (niebo n))
     (linie n))]
    [else (obraz 4)]))