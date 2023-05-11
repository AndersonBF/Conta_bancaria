#include <iostream>
#include "contapoupanca.hpp"
#pragma once


float Contapoupanca::sacar(float saque) {

    cout << "quanto quer sacar" << endl;
    cin >> saque;

    if(saque>getSaldo()) {
        cout << "nao eh possivel sacar" << endl;
    }else{
    setSaldo(getSaldo() - saque);
    cout << "Saldo: " << getSaldo() << endl;
    }
}

float Contapoupanca::calcularRendimentoMensal() {
    cout << "Rendimento mensal: " <<getSaldo()*taxaDeJurosAnual/12 << endl;
    cout << "Saldo atual:" << getSaldo() + getSaldo()*taxaDeJurosAnual/12 << endl;
    setSaldo(getSaldo()+getSaldo()*taxaDeJurosAnual/12);
    }

void Contapoupanca::modificarTaxadeJuros(float modificarTaxadeJurosAnual) {
    taxaDeJurosAnual = modificarTaxadeJurosAnual;
}
