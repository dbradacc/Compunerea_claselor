// TEMA I
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef RATIONAL_H
#define RATIONAL_H

// include-uri pentru alte fișiere header sau clase folosite
#include <iostream>
#include "Pereche.h"

// declarația clasei Rational
class Rational {
public:
    Rational(int a = 0, int b = 1);

    int getA() const;
    int getB() const;
    void setA(int a);
    void setB(int b);

    Rational operator+(const Rational& r) const;
    Rational operator-(const Rational& r) const;
    Rational operator*(const Rational& r) const;
    Rational operator/(const Rational& r) const;

    void simplificare();

private:
    Pereche n;
};

// suprascrierea operatorului de ieșire pentru clasa Rational
std::ostream& operator<<(std::ostream& os, const Rational& r);

// sfârșitul directivăi preprocesor de mai sus
#endif
