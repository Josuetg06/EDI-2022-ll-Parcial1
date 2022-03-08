#include <stdio.h>
#define MAX 5
int sumaPares(int num[MAX] );
int sumaPosicion(int num[MAX]);
int sumaMenor100(int num[MAX],int *acumMenorCien);
int main()
{
  int num[MAX];
  int sumaP;
  int sumaPos;
  int sumaCien;
  int acumMenorCien;


  for(int i=0 ; i<MAX ; i++)
    {
      printf("Dame un numero entre 1 y 100:");
      scanf("%d",&num[i]);
    }

 sumaP = sumaPares (num );
 sumaPos=sumaPosicion(num);
 sumaCien=sumaMenorCien(num,&acumMenorCien);

  printf("La suma de los numeros pares es de:%d\n",sumaP);
  printf("La suma de los valores de las posiciones pares es de:%d\n",sumaPos);
  printf("El acumulado es de %d y se sumaron %d numeros:",sumaCien,acumMenorCien);
  return 0;


}


int sumaPares(int num[MAX])
{
  int sumaPar=0;
  for(int i=0; i<MAX; i++)
  {
    if(num[i]%2==0)
    {
      sumaPar=sumaPar+num[i];
    }
  }
  return sumaPar;
}
int sumaPosicion(int num[MAX])
{
    int sumaPos=0;
    int i=1;
    for(int i=1; i<MAX+1; i++)
    {
      if(i%2==0)
      {
          sumaPos=sumaPos+num[i];
      }
    }
    return sumaPos;
}
int sumaMenorCien(int num[MAX],int *acumMenorCien)

{
    int suma=0;
    int i=0;

    while(suma<100){

        suma=suma+num[i];
        i++;
        *acumMenorCien=acumMenorCien+1;
    }


    return suma;
}


