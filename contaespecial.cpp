#include <iostream>
#include "contaespecial.hpp"

float Contaespecial::sacar(float saque) {
   cout << "quanto quer sacar" << endl;
    cin >> saque;
    if(saque>getLimite()) {
        cout << "voce nao pode sacar tudo isso, seja menos ganancioso!" << endl;
    }else{
    setSaldo(getSaldo()-saque);}
}
void Contaespecial::setLimite(float limite){
    this->limite = limite;
}
float Contaespecial::getLimite() {
    return limite;
}
