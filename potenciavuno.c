/*funcion elevar potencia, segunda version con un repetir */

#include <stdio.h>
#include <math.h>
int main()
{
    int p,n,r=1,i;
        printf("Ingresa Un Numero\n");
        scanf("%i",&n);
        printf("Ingresa Una Potencia\n");
        scanf("%i",&p);
    for (i = 0; i < p ; i++)
    {
         r *= p;
    }
    printf("Tu Numero Elevado A La Potencia: %i",r);
    
    
}