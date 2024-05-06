#include <stdio.h>
/*pedir 10 numeros enteros y señalar cual es mayor ,menor y su suma*/

int main()
{
    int num,i,su=1,acum,m1,m2;
    for (i = 0; i < 10; i++)
    {
        printf("Ingresa Los Numeros\n");
        scanf("%i",&num);
        if (num > m1)
        {
            m1 = num;
        }
        else if (num < m2)
        {
            m2 = num;
        }
        acum += num;
    }
     printf("la suma de los numeros es de: %i\n",acum);
     printf("el numero mayor es:%i\n",m1);
     printf("el numero menor es:%i\n",m2);

     return 0;
    
}