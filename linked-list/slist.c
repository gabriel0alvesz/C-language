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

    if(sl->tam == 0){
        //puts("Vazia!\n");
        return true; //Lista está vazia
    }
    return false;
}

void SList_InsertHead(SList *sl, int val){

    SNode *elem = SList_CreateNode(val);
    
    if(SList_isEmpty(sl) == true){

        sl->first->prox = elem; // O novo nó passa a ser o primeiro elemento da lista;
        sl->last = elem; // E como a lista esta vazia, tambem passa a ser o ultimo elemento      
    
    }else{

        //Faz Swap
        SNode *aux = sl->first->prox; //Recebe o endereço do primeiro elemento.
        elem->prox = aux; // O novo no aponta agora para o antigo primeiro elemento que agora é segundo nó.
        sl->first->prox = elem; // A cabeça agora aponta para o elemento criado, que agora é o primeiro nó.

        //printf("tam = %d\n",sl->tam);
    }

     sl->tam++; 

}

void SList_InsertFinalList(SList *sl, int val){

    SNode *elem = SList_CreateNode(val);

    if(SList_isEmpty(sl) == true){

        sl->first->prox = elem; // O novo nó passa a ser o primeiro elemento da lista;
        sl->last = elem; // E como a lista esta vazia, tambem passa a ser o ultimo elemento

    }else{

        sl->last->prox = elem;
        sl->last = sl->last->prox;
        sl->last->prox = NULL;
        
    }

    sl->tam++;

}

void SList_PrintSList(SList *sl){

    SNode *aux = sl->first->prox;

    while(aux != NULL){

        printf("%d ", aux->val);
        aux = aux->prox; // Percorre a Lista.

    }

    puts("\n");
    printf("Tamanho da Lista = %d\n",sl->tam);
    
}


