#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char nombre[28];
    printf("ingrese su apellido y nombre:");
    gets(nombre);
    for (int i = 0; i < 28; i++)
    {   
        if (nombre[i] == '\0')
        {
            nombre[i] = '.';
        }
        printf("%c", nombre[i]);
    }
    

    return 0;
}