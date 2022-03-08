#include <stdio.h>
#define MAX 100
void capturaArreglo(char arr[MAX]);
void pideCaracter(char *car);
int contarLetra(char *arr, char car);
int main()
{

    char arreglo[MAX];
    char caracter;
    int acum;

    capturaArreglo(arreglo);
    pideCaracter(&caracter);
    acum=contarLetra(arreglo,caracter);

    printf("En la cadena hay: %d\n ",acum);
    printf("De la letra: %c",caracter);


    return 0;
}

void capturaArreglo(char arr[MAX])

{

    printf("Dame una cadena de caracteres:" ) ;
    scanf("%[^\n]",arr);


}

void pideCaracter(char *car)
{

    printf("Dame una letra del abecedario:");
    scanf("%s",car);


}

int contarLetra(char *arr, char car)
{
    int acumulador = 0;

    for(int i = 0; i < MAX; i++)
    {
        if(arr[i] == car)
        {
            acumulador++;
        }
    }
    return acumulador-2;
}

