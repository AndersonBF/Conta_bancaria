#include <iostream>
#include "titular.hpp"
#include <string>

void Titular::setNome(string nome) {
    this->nome = nome;
}
string Titular::getNome() {
    return nome;
}
void Titular::setCPF(string CPF) {
    this->CPF = CPF;
}
string Titular::getCPF() {
    return CPF;
}
void Titular::setCep(int cep) {
    this->cep = cep;
}
int Titular::getCep() {
    return cep;
}


