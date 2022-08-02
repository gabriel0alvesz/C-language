#include "slist.h"

void SList_Create(SList *sl){
    
    sl->first = (SNode*) malloc(sizeof(SNode)); //Aloca a cabeça da lista
    sl->last = sl->first;
    sl->first->prox = NULL;

    //Cabeca da lista criada - Lista vazia
}