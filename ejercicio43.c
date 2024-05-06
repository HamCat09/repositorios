#include <stdio.h>
int main()
{
    int contr,cont;
    char root[50];
        printf("Ingresa Tu Usuario\n");
        scanf("%s",&root);
        while (cont<=3 || contr==0)
        {
            printf("Ingresa la contraseña\n");
            scanf("%d",&contr);
            if (contr==1234)
            {
                printf("BIENVENIDO AL SISTEMA\n");
                cont =4;
            }
            cont++;
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
