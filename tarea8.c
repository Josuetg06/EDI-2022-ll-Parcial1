#include <stdio.h>
#define N 4
#define M 3

void entradaDatos(int array1[N][M], int array2[N][M]);
void sumaa(int array1[N][M], int array2[N][M], int suma[N][M]);
void promCol(int suma[N][M], float promCol[M]);
void promRen(int suma[N][M], float promRen[N]);

int main()
{
    int arr1[N][M];
    int arr2[N][M];
    int suma[N][M];
    float prom_Col[M];
    float prom_Ren[N];


    entradaDatos(arr1, arr2);
    sumaa(arr1, arr2, suma);
    promCol(suma, prom_Col);
    promRen(suma, prom_Ren);

    printf("\n");
    for (int i=0; i<N; ++i)
    {
        for (int j=0; j<M; ++j)
        {
            printf("%d\t", arr1[i][j]);
        }
         printf("\n");
    }
    printf("\n");

       for (int i=0; i<N; ++i)
    {
        for (int j=0; j<M; ++j)
        {
            printf("%d\t", suma[i][j]);
        }
         printf("\n");

    }
         printf("\n");

    for (int i=0; i<M; ++i)
    {
        printf("%.0f\t", prom_Col[i]);
    }
        printf("\n");


      for (int i = 0; i < N; ++i)
    {
        printf("%.0f\t", prom_Ren[i]);
    }
     printf("\n");


    return 0;
}



void entradaDatos(int array1[N][M], int array2[N][M])
{
    for (int i=0; i<N; ++i)
    {
        for (int j=0; j<M; ++j)
        {
            printf("Ingresa el dato [%d][%d]:", i, j);
            scanf("%d", &array1[i][j]);

            array2[i][j] = array1[i][j];
        }

    }


}

void sumaa(int array1[N][M], int array2[N][M], int suma[N][M])
{
    for (int i=0; i<N; ++i)
    {
        for (int j=0; j<M; ++j)
        {
            suma[i][j] = array1[i][j] + array2[i][j];
        }
    }
}

void promCol(int suma[N][M], float promCol[M])
{
    for (int j=0; j<M; ++j)
    {
        for (int i=0; i<N; ++i)
        {
            promCol[j] = promCol[j]+suma[i][j];
        }
            promCol[j] = promCol[j]/N;
    }
}

void promRen(int suma[N][M], float promRen[N])
{
    for (int i=0; i<N; ++i)
    {

        for (int j=0; j<M; ++j)
        {
            promRen[i] =  promRen[i]+suma[i][j];
        }
            promRen[i] =  promRen[i]/M;
    }
}
