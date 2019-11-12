#include <iostream>
#include "FilaDupla.h"
using namespace std;

int main(){
    FilaDupla<int> f(3);
    int x, opc;

    do{
        cout<<"1 - Adicionar Inicio"<<endl;
        cout<<"2 - Remover Inicio"<<endl;
        cout<<"3 - Adicionar Fim"<<endl;
        cout<<"4 - Remover Fim"<<endl;
        cout<<"5 - Exibir Inicio"<<endl;
        cout<<"6 - Exibir Fim"<<endl;
        cout<<"7 - Exibir Todos"<<endl;
        cout<<"9 - Sair"<<endl;
        cin>>opc;

        switch(opc){
            case 1:
                if(!f.EstaCheia()){
                    cout<<"Digite um numero: ";
                    cin>>x;
                    f.AdicionarInicio(x);
                }else{
                    cout<<"Esta cheia."<<endl;
                }
                break;
            case 2:
                if(!f.EstaVazia()){
                    cout<<"Elemento Removido: "<<f.RemoverInicio()<<endl;
                }else{
                    cout<<"Esta vazia."<<endl;
                }
                break;
            case 3:
                if(!f.EstaCheia()){
                    cout<<"Digite um numero: ";
                    cin>>x;
                    f.AdicionarFim(x);
                }else{
                    cout<<"Esta cheia."<<endl;
                }
                break;
            case 4:
                if(!f.EstaVazia()){
                    cout<<"Elemento Removido: "<<f.RemoverFim()<<endl;
                }else{
                    cout<<"Esta vazia."<<endl;
                }
                break;
            case 5:
                cout<<f.ExibirInicio()<<"\t"<<endl;
                break;
            case 6:
                cout<<f.ExibirFinal()<<"\t   "<<endl;
                break;
            case 7:
                if(f.inicio <= f.fim){
                    for(int i = f.inicio; i <= f.fim; i++){
                        cout<<f.ExibirIndice(i)<<"\t  "<<endl;
                    }
                }else{
                    for(int i = f.inicio; i < f.tamanho; i++){
                        cout<<f.ExibirIndice(i)<<"\t  "<<endl;
                    }
                    for(int i = 0; i <= f.fim; i++){
                        cout<<f.ExibirIndice(i)<<" \t "<<endl;
                    }
                }
                break;
        }
    }while(opc != 9);
}
