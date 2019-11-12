#ifndef FILALIGADA_H_INCLUDED
#define FILALIGADA_H_INCLUDED
#include "node.h"
template <typename Tipo>
struct Lista{
   Node<Tipo> *h;
   Lista(){
    h=NULL;
   }
   bool insere(Tipo x){
        bool v=true;
        Node<Tipo> *aux=new Node<Tipo>;

        if(aux==NULL)
            v=false;
        else {
                aux->info=x;
            if(h==NULL || x< h->info){
                aux->prox=h;
                h=aux;
            }
            else{
                Node<Tipo> *aux2=h;
                while ( aux2->prox != NULL && x > aux2->prox->info){
                    aux2=aux2->prox;
                }
            aux->prox = aux2 -> prox;
            aux2->prox=aux;
            }
        }
        return v;
   }

   bool listavazia(){
       return h==NULL;
   }

   bool remover(Tipo x){
       bool v=true;
       Node<Tipo> *aux2=h;
       Node<Tipo> *aux=h;
        if(aux==NULL)
            v=false;
        else {
            if(aux2->info == x){
                aux->info = h->info;
                h = h->prox;
            }
        else {
                while ( aux2->prox != NULL && x == aux2->prox->info){
                    aux2=aux2->prox;
                }
                aux->prox = aux2 -> prox;
                aux2->prox=aux;
            }}

        delete aux;
        return v;
}
    bool busca(Tipo x){
        bool v=true;
        Node<Tipo> *aux2=h;
         while ( aux2->prox != NULL && x == aux2->prox->info){
                    aux2=aux2->prox;
                }
        if (aux2->prox == NULL)
            v=false;
        return v;
 }


};
#endif // FILALIGADA_H_INCLUDED





