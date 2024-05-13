#include <stdio.h>
int main()
{
    int conta,list;
    char nom[50];
    char cont = '5bm';
    char contr[50];
    while (cont<=3 || cont==0)
    {
        printf("Ingresa Tu Nombre\n");
        scanf("%s",&nom);
        printf("Ingresa Tu Numero De Lista\n");
        scanf("%i",&list);
        printf("Ingresa la contraseña\n");
        scanf("%s",&contr);
        if (contr != cont)
        {
            printf("BIENVENIDO AL SISTEMA\n");
            cont = 3;
        }
        conta++;
        }
        while (cont<3);
        {
            if (cont==3)
            {
                printf("Numero De Intentos Agotados :(");
            }
            
        }
        return 0;
}
