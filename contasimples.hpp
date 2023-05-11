#include <iostream>
#include "conta.hpp"

class Contasimples : public Conta {
private:

public:
    Contasimples() : Conta() {}
    float sacar(float saque);
    string criarchavePIX(string chavePIX);
};
