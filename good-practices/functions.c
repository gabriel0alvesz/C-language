#include<stdio.h>
#include<stdlib.h>

//Quando não houver necessidade de manipulação do vetor dentro da função ou procedimento,
// utliza-se "const" na definição do parametro.
//Outra forma de passar o vetor como parametro é "v[]".

void LeituraDeVetor(const int *v){
    
    int tam_vetor = sizeof(*v); //Retorna o tamanho do vetor
    int i = 0;

    while(i != tam_vetor){

        printf("[%d] = %d", i, v[i]);
        puts("\n");

        i++;
    }
}


int *CriaVetor(int tam){
    
    // Função "calloc" aloca e ja inicializa o conteudo como nulo
    int *vet = (int*)calloc(tam,sizeof(int));

    /**
     * O looping abaixo pode ser modificado para prencher o vetor com valores aleatorios,
     * com valores da preferencia do usuario ou a partir de determinada regra
     */
    for(int i = 0; i < tam; i++){
        vet[i] = i + 3;
        
    }

    puts("\n");
    return vet;
}

/**
 * Funcão main para Teste das funcoes criadas
 */
int main(){

    int *v = CriaVetor(4);
    LeituraDeVetor(v);

    return 0;
}