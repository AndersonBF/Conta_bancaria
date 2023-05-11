#include <iostream>
#include <vector>
#pragma once
#include "conta.hpp"
#include "contasimples.hpp"
#include "contaespecial.hpp"
#include "titular.hpp"
#include "contapoupanca.hpp"

using namespace std;
float Contapoupanca::taxaDeJurosAnual = 0.06;

Titular cadastrarTitular() {
    Titular t;
    string nome;
    cin >> nome;
    string CPF;
    cin >> CPF;
    int cep;
    cin >> cep;
    t.setNome(nome);
    cout << "Ola, " << nome << endl;
    return t;
}

float atualizarTaxaDeJuros () {
    float atualizarTaxaDeJurosAnual;
    cout << "qual a nova taxa de juros anual" << endl;
    cin >> atualizarTaxaDeJurosAnual;

    return atualizarTaxaDeJurosAnual;

}

int main()
{
    cout << "Poderia digitar seu nome, cpf e cep?" << endl;
    cadastrarTitular();
    int opcoes;
    vector<Contasimples*> v1;
    v1.push_back(new Contasimples());
    Contasimples* c1 = new Contasimples();
    Contapoupanca* c2 = new Contapoupanca();
    Contaespecial* c3 = new Contaespecial();

    cout << "O que voce quer fazer?" << endl;
    cout << "Para conta simples:" << endl;
    cout << "1.Colocar saldo como R$ 1000 2.Criar chave PIX              3.Sacar" << endl;
    cout << "Para conta poupanca:" << endl;
    cout << "4.Definir saldo como R$ 2000 5.Calcular o rendimento mensal 6.Sacar" << endl;
    cout << "Para conta especial:" << endl;
    cout << "7.Definir saldo como R$ 3000 8.Modificar taxa de juros      9.sacar" << endl;
    cout << "10.Fechar o programa" << endl;
while (opcoes!=10) {
    cin >> opcoes;
    switch(opcoes) {
    case 1:
        c1->setSaldo(1000);
        break;
    case 3:
        c1->sacar(100);
        break;
    case 2:
        c1->criarchavePIX("123.345.678-90");
        break;
    case 4:
        c2->setSaldo(2000);
        break;
    case 5:
        c2->calcularRendimentoMensal();
        break;
    case 6:
        c2->sacar(100);
        break;
    case 7:
        c3->setSaldo(3000);
        break;
    case 9:
        c3->sacar(1000);
        break;
    case 8:
        Contapoupanca::modificarTaxadeJuros(atualizarTaxaDeJuros());
        break;
    case 10:
        return 0;

    default:
        cout << "Opcao Invalida" << endl;
    }
}
    return 0;
}
