#include "cabecalho.h"


int Menu(){

    int op;
    
    printf("\n\n--------------- MENU ---------------\n");
	printf("\n(1) Vetor\t\t (2) Matriz 2D\n");
	printf("(3) Matriz 3D\n");
	printf("(0) SAIR!");	

	printf("\n\nQual opção: ");
	scanf("%d", &op);

	return (op);

}

void Loop(){

    int op = -1;

    while(op != 0){

        op = Menu();

        switch (op){
        case 1:
            TesteFuncoesVetor();
            break;
        
        case 2:
            TesteFuncoesMatriz();
            break;
        
        case 3: 
            Teste3D();
            break;

        case 0:
            op = 0;
            break;

        default:
            puts("\nOpção Inválida\n");
            break;
        }

    }

}



/**
 * Teste das Funções
 */
int main(){

    Loop();

    return 0;
}

