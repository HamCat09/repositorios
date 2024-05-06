#include <stdio.h>

int main()
{
    int carta;
    printf("Ingresa El Numero De Carta\n");
    scanf("%d",&carta);

    switch (carta)
    {
    case 1:printf("ES UN AS");break;
    case 10:printf("ES UN SOTA");break;
    case 11:printf("CABALLO");break;
    case 12:printf("REY");break;
    default:
    if (carta>=2 && carta<=9)
    {
      printf("NO ES NINGUNA CARTA");    
    }
    else
    {
     printf("NO ES NINGUNA CARTA DE LA BARAJA ESPANOLA");
    }
    break;
    return 0;
 
    }

}