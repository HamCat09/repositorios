#include <stdio.h>
int main()
{
    int conta,list,ctd,arti,total,precio,artic,i,cont,acum;
    printf("¿Cuantos Articulos Llevas?\n");
    scanf("%i",&arti);
    for (i = 1; i < arti; i++)
    {
    printf("ingresa su precio\n");
    scanf("%i",&precio);
    total += precio;
    }
    printf("el total a pagar es de: %d\n",total);
    if (arti==0)
    {
        printf("COMPRA FINALIZADA");
    }

    return 0;
}