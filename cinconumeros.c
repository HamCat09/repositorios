#include <stdio.h>

int main()
{
    int x,min,i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingresa los numeros %d:", i+1);
        scanf("%d",&x);
        if (x < min)
        {
            min = x;
        }
        
    }
    printf("El numero menor es:%d",min);
   //comentario de prueba
    //linea del 29-abril-24
    return 0;
}