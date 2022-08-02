#include "slist.h"

void SList_Create(SList *sl){

    sl->first = (SNode*) malloc(sizeof(SNode)); //Aloca a cabeça da lista
    sl->last = sl->first;
    sl->first->prox = NULL;
    sl->tam = 0;
    //Cabeca da lista criada - Lista vazia
}

SNode *SList_CreateNode(int val){

    SNode *novo = (SNode*)malloc(sizeof(SNode));
    novo->val = val;
    novo->prox = NULL; //Cria novo nó

    return novo;
}

bool SList_isEmpty(SList *sl){

    if(sl->last == sl->first || sl->tam == 0 || sl->first->prox == NULL){
        return true; //Lista está vazia
    }
    return false;
    

