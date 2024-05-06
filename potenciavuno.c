/*funcion elevar potencia, segunda version con un repetir */

#include <stdio.h>
#include <math.h>
int main()
{
    int pot,numero,result;
    printf("Ingresa Un Numero\n");
    scanf("%i",&numero);
    printf("Ingresa Una Potencia\n");
    scanf("%i",&pot);
    result= pow(numero,pot);
    printf("Tu Numero Elevado A La Potencia:%i",result);
}