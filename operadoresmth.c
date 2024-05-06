#include <stdio.h>
#include <math.h>

int main()
{
    int menu,b,h,B,areas;
    printf("1-.Area de un triangulo\n");
    printf("2-.Area de un trapecio\n");
    printf("3-.Area de un rectangulo\n");
    printf("¿Que deseas conocer?\n");
    scanf("%d",&menu);
    switch(menu)
    {
    case 1:printf("Ingresa La Base Y Altura\n");
    scanf("%d",&b);
    scanf("%d",&h);
    areas= b*h/2;
    printf("La Area Del Triangulo Es De %d\n",areas);
    break;
    case 2:printf("Ingresa La Base Mayor,Base Menor Y Altura\n");
    scanf("%d",&B);
    scanf("%d",&b);
    scanf("%d",&h);
    areas=((B+b)*h)/2;
    printf("La Area Es De %d\n",areas);
    break;
    case 3:printf("Ingresa La Base Y La Area\n");
    scanf("%d",&b);
    scanf("%d",&h);
    areas= b*h;
    printf("La Area Es De %d\n",areas);
    break;

    return 0;
}


}
