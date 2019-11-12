#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

using namespace std;

template <typename Tipo>
struct Pilha
{
    Tipo *v;
    int topo;
    int tamanho;

    Pilha(int tam)
    {
        tamanho = tam;
        v = new Tipo[tamanho];
        topo=-1;
    }
    ~Pilha()
    {
        delete v;
    }
    void empilha(Tipo x)
    {
        topo++;
        v[topo]=x;
    }
    Tipo desempilha()
    {
        char temp=v[topo];
        topo--;
        return temp;
    }
    Tipo elementoDoTopo()
    {
        return v[topo];
    }
    bool pilhaCheia()
    {
        if(topo != -1)
            return false;
        else
            return true;;
    }
    bool pilhaVazia()
    {
        if(topo != -1)
            return false;
        else
            return true;

    }
    int getTopo()
    {
        return topo;
    }
    int getTamanho()
    {
        return tamanho;
    }
    Tipo getValor(int pos)
    {
        return v[pos];
    }
};

#endif // PILHA_H_INCLUDED
