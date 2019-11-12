#include <iostream>
#include "Pilha.h"
#include "Expressao.h"
#include <string>

using namespace std;

int main()
{
    string expressao;
    int i=0;
    int tamExpressao;
    char simbolo;
    bool valido=true;
    char topo;

    cout << "Digite uma expressao: ";
    getline(cin, expressao);
    tamExpressao = expressao.length();
    Pilha <char> p(tamExpressao);
    // ISSO AQUI ERA PRA FICAR NUMA BIBLIOTECA, PROVAVELMENTE EXPRESSAO.H
    for(i=0;i<tamExpressao+1;i++) {
        simbolo = expressao[i];
        if (simbolo=='{'||'['||'(') {
            p.empilha(simbolo);
        } else if (simbolo=='}'||']'||')') {
            if (p.pilhaVazia()){
                valido = false;}

            else if (simbolo=='}'&& p.elementoDoTopo()=='{') {
                p.desempilha();
                cout << "Teste1"<<p.desempilha();
            } else if (simbolo==']' && p.elementoDoTopo() == '[') {
                p.desempilha();
                cout << "Teste1"<<p.desempilha();
            } else if (simbolo == ')' && p.elementoDoTopo() == '(') {
                p.desempilha();
                cout << "Teste1"<<p.desempilha();

            }
        }
    }
    if (p.pilhaVazia()&& valido){
        cout << "Expressao Correta\n";
    }
    else
        cout << "Expressao Incorreta";

    return 0;
}
