#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct DNode{

    int val;
    struct DNode *ant, *prox;

}Node;

typedef struct TipoLista{

    Node *first, *last;
    size_t size;

}Lista;




#endif