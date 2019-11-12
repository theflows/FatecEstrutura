#include <iostream>
#include "linear.h"

using namespace std;

int main()
{
    cout << "Lista Linear" << endl;
    ListaLinear<int> lista(10);
    int opc;
    int valor;
    do{
        cout <<"1-insere"<<endl;
        cout <<"2-remove"<<endl;
        cout <<"3-exibe a lista"<<endl;
        cout <<"9-fim"<<endl;
        cout <<"Selecione: ";
        cin>>opc;
        switch(opc){
    case 1:
        if(lista.listacheia()){
            cout<<"lista cheia"<<endl;
        }
        else {
            cout<<"Digite o valor:";
            cin>>valor;
            lista.inserir(valor);
            cout<<"Sucesso"<<endl;
        }
        break;
    case 2:
        if(lista.listavazia()){
            cout<<"lista cheia"<<endl;
        }
        else{
            cout<<"Removido:"<<lista.remover()<<endl;
        }
        break;
    case 3:
        if(lista.listavazia()){
            cout<<"lista cheia"<<endl;
        }
        else{
            cout<<"Elementos da lista"<<endl;
            for(int i=0;i<=lista.indice;i++){
                cout<<lista.v[i]<<" ";
            }
            cout<<endl;
        }
        break;
    case 9:
        cout<<"Fim..."<<endl;
        break;
    default:
        cout<<"Opcao invalida"<<endl;
        break;
        }
    }while(opc!=9);
    return 0;
}
