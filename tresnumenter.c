#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("ingresa el primer numero\n");
    scanf("%d",&num1);
    printf("ingresa el segundo numero\n");
    scanf("%d",&num2);
    printf("ingresa el tercer numero\n");
    scanf("%d",&num3);

    if (num1 == 1 && num2 ==2 && num3 ==3)
    {
        printf("Acceso permitido");
    }
    else
    {
        printf("Acceso denegado");
    }
    return 0;    
}