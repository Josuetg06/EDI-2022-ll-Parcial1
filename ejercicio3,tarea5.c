
#include <stdio.h>


int main ()
{
   int val1;
   int val2;
   int val3;

   printf("Dame el valor del primer lado del triangulo");
   scanf("%d",&val1);
   printf("Dame el valor del segundo lado del triangulo");
   scanf("%d",&val2);
   printf("Dame el valor del tercer lado del triangulo");
   scanf("%d",&val3);

   if(val1==val2 && val2==val3 && val3==val1)
   {
       printf("Es un triangulo equilatero");
   {

       else if (val1==val2 && val1!=val3) || (val1==val3 && val1!=val2 ) ||  (val2==val3 && val2!=val1 )

         {
          printf("Es un triangulo isosceles");
         }


       else if (val1!=val2 && val2!=val3 && val1!=val3)

         {
           printf("Es un triangulo escaleno");
         }



}
