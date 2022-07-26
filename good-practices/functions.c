#include<stdio.h>
#include<stdlib.h>

//Quando não houver necessidade de manipulação do vetor dentro da função ou procedimento,
// utliza-se "const" na definição do parametro.
//Outra forma de passar o vetor como parametro é "v[]".

/**
 * @brief Imprime um vetor.
 * 
 * @param v Vetor que se deseja imprimir.
 * @param tam_vetor Tamanho do vetor: Necessário para imprimir todas as posições.
 */
void LeituraDeVetor(const int *v, int tam_vetor){
    
    int i = 0;

    while(i != tam_vetor){

        printf("[%d] = %d", i, v[i]);
        puts("\n");

        i++;
    }
}

/**
 * @brief Função para Criar um Vetor.
 * @param tam  Tamanho do vetor que se deseja criar.
 * @return É retornado um ponteiro que aponta para a primeira posição do vetor.
 */
int* CriaVetor(int tam){
    
    // Função "calloc" aloca e ja inicializa o conteudo como nulo
    int *vet = (int*)calloc(tam,sizeof(int));

    /**
     * O looping abaixo pode ser modificado para prencher o vetor com valores aleatorios,
     * com valores da preferencia do usuario ou a partir de determinada regra
     */
    for(int i = 0; i < tam; i++){
        vet[i] = i + 3;
        
    }

    return vet;
}

/**
 * @brief Função desaloca vetor
 * 
 * @param v Endereço do vetor(&v).
 * 
 */
void DesalocaVetor(int **v){
    
    free(*v); //Acessa o conteudo de &v
    *v = NULL; 

    puts("Vetor desalocado!\n");
}

/**
 * @brief Funcão para Teste das funcoes criadas
 */
int main(){

    int *v = CriaVetor(6);
    LeituraDeVetor(v,6);

    DesalocaVetor(&v);

    return 0;
}