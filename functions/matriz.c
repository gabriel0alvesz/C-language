#include "cabecalho.h"

/**
 * @brief Cria uma matriz de forma dinâmica
 * 
 * @param n_rows Quantidade de linhas 
 * @param n_columns Quantidade de colunas
 * @return Retorna um Ponteiro que aponta para um inteiro de ponteiro, isto é, cada posição inicial
 * da linha é um ponteiro de inteiro
 */
int **CriaMatriz(int n_rows, int n_columns){
     /**
     * @brief Ponteiro duplo que aponta para o vetor de ponteiro que são as linhas da matriz
     */
    int **M = NULL; 
    int i = 0;
    
    /**
     * Aloca cada coluna da matriz, sendo o ponteiro inicial de cada linha o responsavel por percorrer
     * o vetor.
     * Uma matriz é um vetor de vetores (Array/Arrays)
     */
    M = (int**)calloc(n_rows,sizeof(int*)); 
    
    while(i != n_rows){
        
        M[i] = (int*)calloc(n_columns,sizeof(int));

        i++;
    
    }

    return (int**)M;

}

/**
 * @brief Imprime a matriz
 * 
 * @param M Matriz a ser imprimida.
 * @param n_rows Número de Linhas.
 * @param n_columns Número de Colunas. 
 */
void ImprimeMatriz(int **M, int n_rows, int n_columns){

    puts("\n");

    for(int i = 0; i < n_rows; i++){

        for(int j = 0; j < n_columns; j++){

            printf("[%d][%d] = %d\t", i, j, M[i][j]);
        }
        puts("\n");
    }

}

/**
 * @brief Desaloca Matriz
 * 
 * @param M Matriz a ser desalocada
 * @param n_rows Quantidade de linhas da matriz
 */
void DesalocaMatriz(int **M, int n_rows){

    for(int i = 0; i < n_rows; i++){
        free(M[i]);
    }

    free(M);
    M = NULL;

    puts("Matriz desalocada!\n\n");

}

/**
 * @brief Testa as funções relacionadas a matriz.
 */
void TesteFuncoesMatriz(){
    
    int **matriz = CriaMatriz(2,3);

    ImprimeMatriz(matriz,2,3);

    DesalocaMatriz(matriz,2);

}

/**
 * @brief Cria uma Matriz de 3 dimensões
 * 
 * @param n_slices Quantidade de fatias
 * @param n_rows Quantidade de linhas
 * @param n_columns Quantidade de colunas
 * @return Retorna um Ponteiro Triplo que aponta para a matriz 3D
 */
int ***CriaMatriz3D(int n_slices, int n_rows, int n_columns){

    int ***M = NULL;
    
    M = (int***)calloc(n_slices,sizeof(int**));

    for(int i = 0; i < n_slices; i++){

        M[i] = (int**)calloc(n_rows,sizeof(int*));

        for(int j = 0; j < n_columns; j++){

            M[i][j] = (int*)calloc(n_columns,sizeof(int));
        }
    }

    return (int***)M;
}

/**
 * @brief Imprime a Matriz 3D.
 * 
 * @param M Matriz a ser imprimida.
 * @param n_slices Quantidade de fatias.
 * @param n_rows Quantidade de linhas.
 * @param n_columns Quantidade de colunas.
 */
void ImprimeMatriz3D(int ***M, int n_slices, int n_rows, int n_columns){

    puts("Imprimindo matriz 3D!\n");

    for(int i = 0; i < n_slices; i++){

        for(int j = 0; j < n_rows; j++){

            for(int k = 0; k < n_columns; k++){

                printf("[%d][%d][%d] = %d\n", i, j, k, M[i][j][k]);

            }

            puts("\n");

        }

    }

}

/**
 * @brief Desaloca matriz de 3 dimensões.
 * 
 * @param M Matriz 3D a ser desalocada.
 * @param n_slices Quantidade de latias.
 * @param n_rows Quantidade de linhas.
 */
void Desaloca3D(int ***M, int n_slices, int n_rows){

    for(int i = 0; i < n_slices; i++){

        for(int j = 0; j < n_rows; j++){

            free(M[i][j]);

        }

        free(M[i]);
    }

    free(M);
    M = NULL;

    puts("Matriz 3D desalocada!\n\n");

}

/**
 * @brief Testa funções da matriz 3D
 */
void Teste3D(){

    int ***matriz = CriaMatriz3D(3,3,3);

    ImprimeMatriz3D(matriz,3,3,3);

    Desaloca3D(matriz,3,3);
    
}