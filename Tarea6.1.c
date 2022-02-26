#include <stdio.h>
int esPerfecto(int numeroo);
int main()
{
 int numAValidar;
 int perfecto;

  printf("Dame el numero a validar:");
  scanf("%d",&numAValidar);

  perfecto = esPerfecto(numAValidar);

  if(perfecto==1)
  {
      printf("El numero es perfecto");
  }
  else
  {
     printf("El numero no es perfecto");
  }

 return 0;

}

 int esPerfecto(int numeroo)
{

 int contador=0;
 int perfecto;

    for(int i=1 ; i<numeroo;i++){

    if (numeroo % i==0)
    {
       contador=contador+i;
    }
    }

    if(contador==numeroo)
    {
        perfecto=1;
    }
    else
    {
        perfecto=0;
    }
    return perfecto;
}
