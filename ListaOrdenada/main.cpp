#include <iostream>
#include "filaligada.h"
#include "node.h"
using namespace std;
int main()
{
    cout << "Fila em Alocação Ligada" << endl;
    Lista<int> f;
    int opc, x;
    do{
        cout<<"1- insere"<<endl;
        cout<<"2- Remover"<<endl;
        cout<<"3- exibir a fila"<<endl;
        cout<<"4- Buscar"<<endl;
        cout<<"9- fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
        case 1:
            cout<<"Digite o numero:";
            cin>>x;
                if(f.insere(x)){
                 cout<<"Sucesso!"<<endl;
                }
                else{
                    cout<<"Fila cheia...."<<endl;
                }

            break;
        case 2:
           if(f.listavazia()){
               cout<<"Fila vazia..."<<endl;
           }
            else{
                cout<<"Insira o valor para remover : "<<endl;
                cin>>x;
                if(f.remover(x)){
                 cout<<"Sucesso!"<<endl;
                }
                else
                    cout<<"Valor n encontrado!"<<endl;
            }
            break;
        case 4:
            if(f.listavazia()){
                cout<<"Lista vazia..."<<endl;
            }
            else{
            cout<<"Insira o valor para Busca : "<<endl;
            cin>>x;
            if(f.busca(x)==0){
                 cout<<"Valor "<<x<<" n encontrado!"<<endl;
                }
                else
                 cout<<"Sucesso! "<<x<<" Encontrado "<<"aparece "<<f.busca(x)+1<<" vezes"<<endl;
            }
            break;
        case 3:
            if(f.listavazia()){
                cout<<"Lista vazia..."<<endl;
            }
            else{
                cout<<"Elementos da Lista"<<endl;
                Node<int> *aux = f.h;
                while(aux != NULL){
                    cout<<aux->info<<" ";
                    aux = aux->prox;
                }
                cout<<"\n-------------"<<endl;
            }
            break;
        case 9:
            cout<<"fim"<<endl;
            break;
        default:
            cout<<"opcao invalida"<<endl;
            break;
        }
    }while (opc!=9);

    return 0;
}
