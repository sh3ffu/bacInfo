# SecventaUniforma

## Cerința

Numim **secvență uniformă** a unui șir de numere naturale un subșir al acestuia, format din termeni cu aceeași valoare, aflați pe poziții consecutive în șirul dat. Lungimea secvenței este egală cu numărul de termeni ai acesteia.

Se dă un șir de cel puțin două și cel mult `1000000` de numere naturale din intervalul `[0,10^9]`. În șir există cel puțin doi termeni egali pe poziții consecutive. Se cere să se determine o secvență uniformă de lungime maximă în șirul dat și să se afișeze pe lungimea acestei secvențe și termenii acesteia. Dacă sunt mai multe astfel de secvențe, se afișează doar termenii ultimei dintre acestea.

## Date de intrare

Fișierul de intrare `secventauniforma.in` conține pe prima linie un șir de cel puțin două și cel mult `1000000` de numere naturale din intervalul `[0,10^9]`, separate prin spații.

## Date de ieșire

Fișierul de ieșire `secventauniforma.out` va conține pe prima linie lungimea acestei secvențe și, pe o linie nouă, separați prin câte un spațiu, termenii acesteia.


## Restricții și precizări

- Pentru determinarea numerelor cerute se utilizează un algoritm eficient din punctul de vedere al memoriei necesare și al timpului de executare.
  - Se recomandă evitarea memorării elementelor șirului într-un tablou sau în altă structură de date similară.


## Exemplu

secventauniforma.in

    2 3 3 3 3 5 4 4 11 11 11 11 16 11 11 11 11 15 15

secventauniforma.out

    4
    11 11 11 11
