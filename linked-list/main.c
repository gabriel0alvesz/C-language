#include "slist.h"

int main(){

   SList l;

   SList_Create(&l);

   SList_InsertHead(&l,3);
   SList_InsertHead(&l,4);
   SList_InsertHead(&l,5);

   SList_PrintSList(&l);


    return 0;
}

