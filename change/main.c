#include <stdio.h>
#include "func.h"

int main()
{

/* 2-х мерный массив размером N*N (6*6) */
int matrix[N][N];

/* инициализация матрицы числами попорядку */
initArr (matrix[0]);
/* Вывод матрицы */
printArr (matrix[0]);
/*  перемена столбцов местами. !!!Работает только с четным размером матриц!!! */
changeArr (matrix[0]);
/* Вывод матрицы */
printArr (matrix[0]);

};