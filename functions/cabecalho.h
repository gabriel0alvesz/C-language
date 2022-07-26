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
void DesalocaMatriz(int **M, int n_rows);
void TesteFuncoesMatriz();

/**
 *  Funções para Matriz 3D
 */

int ***CriaMatriz3D(int n_slices, int n_rows, int n_columns);
void ImprimeMatriz3D(int ***M, int n_slices, int n_rows, int n_columns);
void Desaloca3D(int ***M, int n_slices, int n_rows);
void Teste3D();
