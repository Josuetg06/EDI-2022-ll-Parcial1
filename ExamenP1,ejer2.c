#include <stdio.h>

#define MAX 100
void conversion(char cadena[MAX]);

int main()
{
    char cadena[MAX];

    printf("Dame la cadena:");
    scanf("%[^\n]",cadena);

    conversion(cadena);

    printf("%s",cadena);



    return 0;
}

void conversion(char cadena[MAX])
{
    for(int i=0; i<MAX && cadena[i]!='\0';i++)
    {

     if(cadena[i]=='A' || cadena[i]=='E'|| cadena[i]=='I'|| cadena[i]=='O'|| cadena[i]=='U')

       {
        cadena[i]=cadena[i]+32;
       }

     else if(cadena[i]=='a' || cadena[i]=='e'|| cadena[i]=='i'|| cadena[i]=='o'|| cadena[i]=='u')
       {
         cadena[i]=toupper(cadena[i]);
       }

    }




}
