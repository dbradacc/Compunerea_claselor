// TEMA I
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef PERECHE_H
#define PERECHE_H

// include-uri pentru alte fișiere header sau clase folosite
#include <iostream>

// declarația clasei Pereche
class Pereche {
public:
    Pereche(int a = 0, int b = 1);
    int getA() const;
    int getB() const;
    void setA(int a);
    void setB(int b);

private:
    int a;
    int b;
};

// suprascrierea operatorului de ieșire pentru clasa Pereche
std::ostream& operator<<(std::ostream& os, const Pereche& p);

// sfârșitul directivăi preprocesor de mai sus
#endif
