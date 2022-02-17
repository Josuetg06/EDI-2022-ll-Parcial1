#include <stdio.h>

int main ()
{
    float hora;

    printf("Dame una hora del dia con minutos");
    scanf("%f",&hora);

    if(hora>=0 & hora<=11.59)
    {
       printf("Buenos Dias");
    }
    else
        if(hora>=12 && hora<=17.50)
    {
     printf("Buenas tardes");
    }
    else
       if(hora>=18 && hora<=23.59)
    {
        printf("Buenas noches");
    }

    else
        printf("La hora no es valida");




    return 0;
}




