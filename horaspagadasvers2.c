#include <stdio.h>

int main()
{
    float pago,pag;
    int horas,salario;
    printf("¿Cuantas Horas Laboraste?\n");
    scanf("%d",&horas);
    printf("Ingresa Tu Salario Minimo\n");
    scanf("%d",&salario);
    if (horas>40)
    {
        pag =(horas*salario*0.5*2);
        printf("Tu Salario Es De:$%.2f\n",pag);
    }
    else
    {
        pago = horas*salario;
        printf("Tu Salario Es De:$%.2f\n",pago);
    }
    
    return 0;
    

}