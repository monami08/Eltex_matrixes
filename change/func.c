#include <stdio.h>
#include "func.h"

/* инициализация матрицы числами попорядку */
void initArr( int * arr)
{
    for (int i = 0; i < N*N; i++)
	arr[i] = i + 1;
};

/* Вывод матрицы */
void printArr( int * arr)
{
    printf ("\n\n");
    for (int i = 0; i < N*N; i++)
    {
	printf ("\t%d", arr[i]);
	if ((i + 1) % N == 0)
	    printf ("\n\n");
    };
};

/*  перемена столбцов местами. !!!Работает только с четным размером матриц!!! */
void changeArr( int * arr)
{
    int temp;
    for (int i = 0; i < N*N; i += 2)
    {
	temp = arr[i];
	arr[i] = arr[i+1];
	arr [i + 1] = temp;
    };
};