#include <stdio.h>
#include "func.h"

/* инициализация матрицы числами "поспирали" */
void initArr( int * arr)
{
    int i = 1,p = N/2;
    for(int k = 1;k <= p; k++)/*Цикл по номеру витка*/
    {
	/*Определение значений верхней строки*/
	for (int j = k - 1; j < N - k + 1; j++)
	    arr[(k - 1) * N + j] = i++; 
	/* --//-- По правому столбцу*/
	for (int j = k; j < N - k + 1; j++)
	    arr[j * N + N - k] = i++;
	/* --//-- по нижней строке*/ 
	for (int j = N - k - 1; j >= k - 1; --j)
	    arr[(N - k) * N + j] = i++;
	/* --//-- по левому столбцу*/
	for (int j = N - k - 1;j >= k; j--)
	    arr[j * N + k - 1] = i++;
    };
    if (N % 2 == 1)
	arr[p * N + p]= N * N;
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