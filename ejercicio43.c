#include <stdio.h>
int main()
{
    int contr,list,cont,intentos;
    char am[50];
        while (contr<=3 || contr==0)
        {
            printf("Ingresa Tu Nombre\n");
            scanf("%s",&am);
            printf("Ingresa Tu Numero De Lista\n");
            scanf("%d",&list);
            printf("Ingresa la contraseña\n");
            scanf("%d",&contr);
            if (contr==1234)
            {
                printf("BIENVENIDO AL SISTEMA\n");
                intentos=0;
            }
            else
            {
               intentos--; 
            }
            if (intentos>0)
            {
                printf("numero de intentos excedidos te quedan:%d\n",intentos);
            }
            else
            {
                printf("has exedido tus intentos");
            }
            
            
        
        
        return 0;
}

