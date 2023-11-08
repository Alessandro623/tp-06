#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char nombre[18];
    printf("ingrese su apellido y nombre:");
    gets(nombre);
    
    for (int i = 0; i < 17; i++)
    {
        if (islower(nombre[0]) != 0){
            nombre[0] = toupper(nombre[0]);
        }
        
        if (nombre[i] == ' ')
        {
            nombre[i] = ',';
        }
        printf("%c", nombre[i]);
    }
    
    return 0;
}