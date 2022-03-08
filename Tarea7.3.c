#include <stdio.h>
#define TAM 4

void capturaDatos(int clave[TAM],float precio[TAM],int stock[TAM]);
int mayorPrecio(int clave[TAM],float precio[TAM]);
int MenorStock(int clave[TAM],int stock[TAM]);
float ventaTotal (float precio[TAM], int stock[TAM]);

int main() {
    int clave[TAM];
    float precio[TAM];
    int stock[TAM];
    int claveMayor;
    int claveMenor;
    float total;

    capturaDatos(clave,precio,stock);
    claveMayor=mayorPrecio(clave,precio);
    claveMenor=menorStock(clave,stock);
    total=ventaTotal(precio,stock);

    printf("la clave con el precio mayor es:%d\n",claveMayor);
    printf("la clave con el stock menor es:%d\n",claveMenor);
    printf("El total de las ventas es de:%.2f",total);

    return 0;
}

void capturaDatos(int clave[TAM],float precio[TAM],int stock[TAM])
{
    for (int i=0; i<TAM; i++){

        printf("Dame la clave %d:",i+1);
        scanf("%d",&clave[i]);

        printf("Dame el precio %d:",i+1);
        scanf("%f",&precio[i]);

        printf("Dame el stock %d:",i+1);
        scanf("%d",&stock[i]);

        printf("\n");
    }
}

int mayorPrecio(int clave[TAM],float precio[TAM])
{
    int mayor = precio[0];
    int claveMayorP;

    for(int i=1; i<TAM; i++)
    {

       if(precio[i]>mayor)
      {
        mayor=precio[i];
        claveMayorP=clave[i];
      }


    }
    return claveMayorP;

}

int menorStock(int clave[TAM],int stock[TAM])
{
    int menor=stock[0];
    int claveMenorS;

    for(int i=1; i<TAM; i++)
    {
        if (stock[i]<menor)
        {
            menor=stock[i];
            claveMenorS=clave[i];
        }

    }
    return claveMenorS;
}

float ventaTotal (float precio[TAM], int stock[TAM])
{
    float total;

    for(int i=0; i<TAM; i++)
    {
        total+=precio[i]*stock[i];

    }
    return total;

}
