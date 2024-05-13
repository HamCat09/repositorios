#include <stdio.h>
int main()
{
    int conta,list,ctd,arti,total,precio;
    char nom[50];
    char cont[50] = "5bm";
    char contr[50];
    while (ctd=0)
    {
        printf("Ingresa Tu Nombre\n");
        scanf("%s",&nom);
        printf("Ingresa Tu Numero De Lista\n");
        scanf("%i",&list);
        printf("Ingresa la contraseña\n");
        scanf("%s",&contr);
        if (contr == cont)
        {
            printf("BIENVENIDO AL SISTEMA\n");
        }
           while (arti=0)
           {
            printf("¿Cuantos Articulos Llevas?");
            scanf("%i",&arti);
            printf("ingresa su precio");
            scanf("%i",&precio);
            total = arti*precio;
            printf("TOTAL A PAGAR: %i",total);
           }

        

        return 0;

    }
}
