#include <stdio.h>
#define N 10
int mayorYmenor(int num )
int main()
{
    int num;
    int numMayor;
    int numMenor;
 for( int i=1; i==N ;i++){

    printf("Dame un numero ");
    scanf("%d",num)

   numMayor=mayorYmenor(num);
   numMenor=mayorYmenor(num);

    printf("El numero mayor es:",numMayor);
    printf("El numero mayor es:",numMenor);
 }

 return 0;

}
int mayorYmenor(int numeroo)
{
 int numMayor=0;
 int numMenor=10000;

 if (numeroo>numMayor)
 {
     numMayor=numeroo;
 }
  if (numeroo<numMenor)
 {
     numMenor=numeroo;
 }
    return numMayor;
    return numMenor;

}



