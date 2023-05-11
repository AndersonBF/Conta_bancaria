#pragma once
#include <iostream>
#include <string>
#include "titular.hpp"

using namespace std;

class Conta {
private:
    float saldo;
    int numeroconta;
    int agencia;
    Titular titular;
protected:
    string chavePIX;
public:
    string criarchavePIX(string chavePIX);
    void   setchavePIX(string chavePIX);
    string getchavePIX();
    void   setSaldo(float saldo);
    float  getSaldo();
    virtual float sacar(float saldo) = 0;
    Conta (float saldo =0, int numeroconta=0, int agencia=0) : saldo(saldo), numeroconta(numeroconta), agencia(agencia) {
        this->saldo = saldo;
        this->numeroconta = numeroconta;
        this->agencia = agencia;
        }
};
