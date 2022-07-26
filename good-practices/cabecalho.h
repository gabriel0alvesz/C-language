#include<stdio.h>
#include<stdlib.h>  

/**
 *  Funções para Vetor
 */

void LeituraDeVetor(const int *v, int tam_vetor);
int *CriaVetor(int tam);
void DesalocaVetor(int **v);
void TesteFuncoesVetor();


/**
 *  Funções para Matriz
 */

int **CriaMatriz(int n_rows, int n_columns);
void ImprimeMatriz(int **M, int n_rows, int n_columns);
void TesteFuncoesMatriz();