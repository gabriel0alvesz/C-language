#include "slist.h"

int main(){

    SList l;
    
    SList_Create(&l);

    SList_InsertHead(&l,3);
    SList_InsertHead(&l,4);
    SList_InsertHead(&l,5);
    SList_InsertFinalList(&l,8);
    SList_InsertFinalList(&l,9);

    SList_PrintSList(&l);  

    return 0;
}

