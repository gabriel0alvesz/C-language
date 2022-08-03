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
   return sl->tam == 0;
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

    printf("\nLista => ");

    while(aux != NULL){

        printf("%d -> ", aux->val);
        aux = aux->prox; // Percorre a Lista.

    }

    puts("NULL\n");
    printf("Tamanho da Lista = %d\n\n",sl->tam);
    
    printf("Primeiro elemento = %d\nUltimo elemento = %d\nlast->prox = NULL? %d\n\n",sl->first->prox->val, sl->last->val, sl->last->prox == NULL);
    
}

void SList_RemoveNode(SList *sl, int val){

    if(!SList_isEmpty(sl)){

        //Será o nó responsavel por percorrer a lista e guardar o nó a ser removido
        SNode *f = sl->first->prox; // Recebe o primeiro nó da lista.
        SNode *l = sl->last; // Recebe o ultimo elemento da lista

        if(f->val == val){
            //Se houver apenas um elemento na lista.
            if(f == l){

                free(f);
                sl->first->prox = NULL;
                sl->last = sl->first;
                sl->last->prox = NULL;
            
            }else{

                sl->first->prox = f->prox; //Aponta agora para o segundo nó da lista se tiver.
                free(f); //Remove o primeiro elemento
            
            }

            sl->tam--;
            
        }else if(f->val != val){
            
            SNode *aux, *temp; //temp é um auxiliar que pega a posiçao anterior

            aux = sl->first->prox;
            temp = NULL;

            while(aux != NULL){

                if((aux->val) == val){

                    if(aux == l){
                        sl->last = temp;
                    }

                    temp->prox = aux->prox;

                    free(aux);
                    sl->tam--;
                    
                    break;
                    
                }
                
                temp = aux;
                aux = aux->prox;

            }

        }else{

            printf("----> O valor %d, não se encontra na lista!\n", val);

        }
        
    }else{

        printf("----> A lista está vazia!\n");

    }

}


