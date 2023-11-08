#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define TAMA 8
int main(){
    char contrasenia[TAMA];
    char contraseniaVerificar[TAMA];
    int chica = 0, grande= 0, digito= 0;
    printf("Ingrese la contrasenia de 8 digitos = ");
    gets(contrasenia);
    while (strlen(contrasenia) < 8)
    {
        printf("La contrasenia debe tener 8 digitos, vuelva a ingresarla = ");
        gets(contrasenia);
    }
    
    for (int i = 0; i < TAMA; i++)
    {
        if (isupper(contrasenia[i]))
        {
            grande += 1;
        } else if(islower(contrasenia[i])){
            chica += 1;
        } else if(isdigit(contrasenia[i])){
            digito += 1;
        }
        
    }
    
    if(chica && grande && digito){
        printf("la contrasenia cumple con los requisitos\n");
    } else {
        printf("la contrasenia no cumple los datos requieridos");
        exit(0);
    }

    printf("Ingrese la contrasenia nuevamente para verificar = ");
    gets(contraseniaVerificar);

    if (stricmp(contrasenia, contraseniaVerificar) != 0)
    {
        printf("las contrasenias coinciden\n");
    }
    
    return 0;
}