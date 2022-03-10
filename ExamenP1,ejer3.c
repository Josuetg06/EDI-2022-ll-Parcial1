#include <stdio.h>
#define N 3
#define M 4

void capturaArreglo(int arreglo[N][M]);
void sumaVecinos(int arreglo[N][M],int sumaV[N][M]);
void imprimeArreglo(int sumaV[N][M]);
int main()
{
    int arreglo[N][M];
    int sumaV[N][M];

    capturaArreglo(arreglo);
    sumaVecinos(arreglo,sumaV);
    imprimeArreglo(sumaV);



    return 0;
}

void capturaArreglo(int arreglo[N][M])
{
    for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
		{
		    printf("Ingrese el valor de [%d] [%d] ", i, j);
			scanf("%d", &arreglo[i][j]);
		}
	}
}

void sumaVecinos(int arreglo[N][M],int sumaV[N][M])
{
    for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
		{
		    sumaV=arreglo[N][M];

          if(i>0)
           {
               sumaV+= arreglo[i-1][j];
           }
          if(i<N-1)
           {
              sumaV+= arreglo[i-1][j];
           }
           if(j>0)
           {
             sumaV+= arreglo[i][j-1];
           }
           if(j<M-1)
           {
             sumaV+= arreglo[i][j+1];
           }

		}
	}

}
void imprimeArreglo(int sumaV[N][M])
{
    for(int i=0;i<N;i++){

        for(int j=0;i<M;j++){

            printf("%d\t", sumaV[i][j]);

        }

    }



}


