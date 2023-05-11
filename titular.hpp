#pragma once
#include <iostream>
#include <string>

using namespace std;

class Titular {
private:
    string nome;
    string CPF;
    int cep;
public:
    Titular (string nome="0", string CPF="0", int cep=0) {
    this->nome = nome;
    this->CPF = CPF;
    this->cep = cep;
    }
    void setNome(string nome);
    string getNome();
    void setCPF (string CPF);
    string getCPF();
    void setCep(int cep);
    int getCep();

};
