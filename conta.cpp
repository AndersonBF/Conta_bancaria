#include <iostream>
#include "conta.hpp"

 string Conta::criarchavePIX(string chavePIX) {
    this->chavePIX = chavePIX;
    cin >> chavePIX;
    cout << "sua chave pix eh " << chavePIX << endl;
 }

void Conta::setSaldo(float saldo) {
    this->saldo = saldo;
    cout << "seu saldo eh " << saldo << endl;
}
float Conta::getSaldo() {
    return saldo;
}








