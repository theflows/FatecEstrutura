#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *prox;
};


#endif // NODE_H_INCLUDED
