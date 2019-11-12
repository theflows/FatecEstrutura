#ifndef LINEAR_H_INCLUDED
#define LINEAR_H_INCLUDED

template <typename Tipo>

struct ListaLinear{
    Tipo *v;
    int tamanho;
    int indice;
    ListaLinear(int tam){
        tamanho=tam;
        v= new Tipo[tamanho];
        indice=-1;
    }
    ~ListaLinear(){
        delete v;
    }
    void inserir(Tipo x){
        indice++;
        v[indice]=x;
    }
    Tipo remover(){
        Tipo temp= v[indice];
        indice--;
        return temp;
    }
    bool listacheia(){
        return indice==tamanho-1;
    }
    bool listavazia(){
        return indice==-1;
    }

};

#endif // LINEAR_H_INCLUDED
