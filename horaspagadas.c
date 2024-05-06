#include <stdio.h>

int main()
{
    int sal,hora,pago;

    printf("¿Cuantas Horas Laboraste?\n");
    scanf("%d",&hora);
    printf("Ingresa Tu Salario\n");
    scanf("%d",&sal);
    pago=hora*sal;
    printf("Tu Paga Total Es De: $%d\n",pago);

    return 0;
}
