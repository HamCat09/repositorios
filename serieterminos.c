#include <stdio.h>
int main()
{
    int s,i;
    printf("¿Cuantos Terminos Desea Conocer?\n");
    scanf("%d",&s);
       
    for ( i = 1; i <= s; i++)
{
    printf("%d\n",i*5);
}
    return 0; 

}
