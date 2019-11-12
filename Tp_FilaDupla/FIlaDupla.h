#ifndef FILADUPLA_H_INCLUDED
#define FILADUPLA_H_INCLUDED
template <typename Tipo>
struct FilaDupla
{
    int inicio, fim, tamanho, qnt;
    Tipo *v;

    FilaDupla(int tam)
    {
        inicio = 0;
        fim = -1;
        tamanho = tam;
        qnt = 0;
        v = new Tipo[tamanho];
    }
    ~FilaDupla()
    {
        delete v;
    }

    void AdicionarFim(Tipo x)
    {
        fim++;
        if(fim == tamanho)
            fim = 0;

        v[fim] = x;
        qnt++;

        if(qnt == 1)
            inicio = fim;
    }

    void AdicionarInicio(Tipo x)
    {
        inicio--;
        if(inicio == -1)
            inicio = tamanho-1;

        v[inicio] = x;
        qnt++;

        if(qnt == 1)
            fim = inicio;
    }

    Tipo RemoverFim()
    {
        Tipo aux = v[fim];
        fim--;
        qnt--;
        return aux;
    }

    Tipo RemoverInicio()
    {
        Tipo aux = v[inicio];
        inicio++;
        qnt--;
        return aux;
    }

    Tipo ExibirInicio()
    {
        return v[inicio];
    }

    Tipo ExibirIndice(int i)
    {
        return v[i];
    }

    Tipo ExibirFinal()
    {

        return v[fim];
    }

    bool EstaCheia()
    {
        return qnt == tamanho;
    }

    bool EstaVazia()
    {
        return qnt == 0;
    }
};


#endif // FILADUPLA_H_INCLUDED
