#include <stdio.h>

int main()
{
    char voc;

    printf("Ingresa una vocal\n");
    scanf("%c",&voc);

    switch (voc)
    {
        case 'a':printf("Es una vocal");break;
        case 'e':printf("Es una vocal");break;
        case 'i':printf("Es una vocal");break;
        case 'o':printf("Es una voccal");break;
        case 'u':printf("Es una vocal");break;
        default: printf("Haz tecleado un caracter que no es una vocal");
        
    }
}
