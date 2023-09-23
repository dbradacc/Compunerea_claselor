// TEMA I
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "Pereche.h"

// constructorul clasei Pereche, care initializează cele două variabile membre cu valorile date
Pereche::Pereche(int a, int b) : a(a), b(b) {}

// funcție care returnează valoarea variabilei membre a
int Pereche::getA() const {
    return a;
}

// funcție care returnează valoarea variabilei membre b
int Pereche::getB() const {
    return b;
}

// funcție care setează valoarea variabilei membre a
void Pereche::setA(int a) {
    this->a = a;
}

// funcție care setează valoarea variabilei membre b
void Pereche::setB(int b) {
    this->b = b;
}

// operatorul de ieșire pentru clasa Pereche, care afișează valorile celor două variabile membre în formatul "a, b"
std::ostream& operator<<(std::ostream& os, const Pereche& p) {
    os << p.getA() << ", " << p.getB();
    return os;
}
