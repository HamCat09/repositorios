int main()
{
    int contr,list,cont,intentos,arti,precio,total,i;
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
