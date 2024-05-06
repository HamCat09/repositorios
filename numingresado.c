#include <stdio.h>

int main()
{
    int n=1,acum,cont=0;
    do
    {
        printf("ingrese un numero\n");
        scanf("%d",&n);
        if (n>0)
        {
             cont = cont+1;
            acum = acum+n;
            printf("has introducido el numero:%d\n",n);
        }
        
    } while (n>0);

        printf("Tu Total De Numeros Ingresados Es De:%d",cont);
        printf("\nTu Total De Numeros Es:%d",acum);

        return 0;   
}