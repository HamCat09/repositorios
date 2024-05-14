#include <stdio.h>

int ResultArtic (int art, int total);
int main()
{
    int artic,result,i,ttaal,cont,acum;
    printf("Total De Articulos:\n");
    scanf("%i",&artic);
    for ( i = 0; i < artic; i++)
    {
    printf("Ingresa El Costo:\n");
    scanf("%i",&result);
    cont = cont+1;
    acum = acum+i;
    }
    acum= artic*result;
    printf("el resultado es:%i\n",acum);

    
    return 0;
}