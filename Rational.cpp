// TEMA I
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "Rational.h"
#include <algorithm>

// funcția gcd, care returnează cel mai mare divizor comun dintre două numere
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// constructorul clasei Rational, care inițializează obiectul cu valorile date și apelează funcția simplificare
Rational::Rational(int a, int b) : n(a, b) {
    simplificare();
}

// funcție care returnează valoarea variabilei membre a din obiectul Pereche din clasa Rational
int Rational::getA() const {
    return n.getA();
}

// funcție care returnează valoarea variabilei membre b din obiectul Pereche din clasa Rational
int Rational::getB() const {
    return n.getB();
}

// funcție care setează valoarea variabilei membre a din obiectul Pereche din clasa Rational
void Rational::setA(int a) {
    n.setA(a);
}

// funcție care setează valoarea variabilei membre b din obiectul Pereche din clasa Rational
void Rational::setB(int b) {
    n.setB(b);
}

// suprascrierea operatorului + pentru adunarea a două numere raționale
Rational Rational::operator+(const Rational& r) const {
    int num = getA() * r.getB() + getB() * r.getA();
    int den = getB() * r.getB();
    return Rational(num, den);
}

// suprascrierea operatorului - pentru scăderea a două numere raționale
Rational Rational::operator-(const Rational& r) const {
    int num = getA() * r.getB() - getB() * r.getA();
    int den = getB() * r.getB();
    return Rational(num, den);
}

// suprascrierea operatorului * pentru înmulțirea a două numere raționale
Rational Rational::operator*(const Rational& r) const {
    int num = getA() * r.getA();
    int den = getB() * r.getB();
    return Rational(num, den);
}

// suprascrierea operatorului / pentru împărțirea a două numere raționale
Rational Rational::operator/(const Rational& r) const {
    int num = getA() * r.getB();
    int den = getB() * r.getA();
    return Rational(num, den);
}

// funcție care simplifică numărul rațional, adică împarte numărătorul și numitorul la cel mai mare divizor comun
void Rational::simplificare() {
    int div = gcd(getA(), getB());
    setA(getA() / div);
    setB(getB() / div);
}

// suprascrierea operatorului de ieșire pentru afișarea numărului rațional în formatul "a/b"
std::ostream& operator<<(std::ostream& os, const Rational& r) {
    os << r.getA() << "/" << r.getB();
    return os;
}
