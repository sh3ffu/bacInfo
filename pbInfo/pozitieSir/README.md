# pozitieSir

## Cerința

Considerăm şirul a cu n numere naturale nenule distincte două câte două şi un număr x. Scrieţi un program care determină poziţia pe care se va găsi numărul x în şirul a, dacă acesta ar fi ordonat descrescător.

## Date de intrare

Programul citește de la tastatură numerele n şi x, urmate de n numere naturale reprezentând elementele şirului a.

## Date de iesire

Programul va afișa pe ecran poziţia determinată mai sus. Dacă numărul x nu se regăseşte în şir, valoarea afişată va fi -1.

## Restricții și precizări

    1 ≤ n < 200000
    cele n numere citite vor fi mai mici decât 10^9
    considerăm elementele şirului a numerotate de la 1 la n

## Exemple:

Intrare

    9 13
    26 2 5 30 13 45 62 7 79

Ieșire

    6

Dacă sortăm şirul a descrescător obţinem şirul (79,62,45,30,26,13,7,5,2). Valoarea 13 se află pe poziţia 6.
