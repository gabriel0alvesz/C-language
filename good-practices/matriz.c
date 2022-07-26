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
 * @brief Testa as funções relacionadas a matriz.
 */
void TesteFuncoesMatriz(){
    
    int **matriz = CriaMatriz(2,3);

    ImprimeMatriz(matriz,2,3);

}