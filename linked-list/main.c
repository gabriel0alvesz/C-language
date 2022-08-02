#include "slist.h"

int main(){

   SList l;

   SList_Create(&l);

   SNode *aux = SList_CreateNode(3);

   SList_isEmpty(&l);

    return 0;
}

