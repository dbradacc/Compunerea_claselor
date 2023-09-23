// TEMA I
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include <iostream>
#include "Pereche.h"
#include "Rational.h"

using namespace std;

// funcția principală
int main() {
    // se declară și se inițializează patru obiecte Rational cu valori date
    Rational p(-2, 3), r(2, 6), s(1, 5), t(-1, 4);

    // se simplifică numărul rațional r
    r.simplificare();

    // se afișează valoarea simplificată a lui r
    cout << r << endl;

    // se realizează operații de adunare și scădere pe numerele raționale r și p
    r = r + s;
    p = p - r;

    // se realizează operații de înmulțire și împărțire pe numerele raționale p și r
    t = t * p;
    s = p / r;

    // se afișează valorile de p, r, s și t
    cout << p << endl << r << endl << s << endl << t << endl;

    // indică finalul cu succes al programului
    return 0;
}
