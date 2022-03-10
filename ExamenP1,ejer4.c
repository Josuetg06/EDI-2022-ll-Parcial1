#include <stdio.h>
void compara(int a,int*b,int*c);
int main()
{
  int a;
  int b;
  int c;

  printf("a:");
  scanf("%d",&a);

  printf("b:");
  scanf("%d",&b);

  printf("c:");
  scanf("%d",&c);

 compara(a,&b,&c);

printf("%d %d %d",a,b,c);
 return 0;
}

void compara(int a,int*b,int*c)
{
    if(a>*b)
    *b=*b*2;

    else
        if(a<*b)
        *c=*c-a;

    if(*c<0)
    *c*=-1;

}
