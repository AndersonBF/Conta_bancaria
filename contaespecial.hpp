#include <iostream>
#include "conta.hpp"


class Contaespecial : public Conta {
private:
    float limite=2000;
public:
    void setLimite(float limite);
    float getLimite();
    float sacar(float saque);
    string criarchavePIX(string chavePIX);
};
