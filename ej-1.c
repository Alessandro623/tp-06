#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//Funciones declaradas
void cargarArreglo(int array[], int TAMA,int num1,int num2);
void mostrarArreglo(int array[],int TAMA);
int buscarMayor(int array[],int TAMA);
void sumarPosicionesImpares(int array[],int TAMA);
void buscarPromedios(int array[],int TAMA);

//CODIGO PRINCIPAL
int main(){
    srand(time(NULL));
    int TAMA = 0;
    printf("ingrese un numero menor a 15 = ");
    scanf("%d", &TAMA);
    while (TAMA > 15)
    {
        printf("Porfavor verifique su numero y vuelva a ingresar un numero menor a 15 = ");
        scanf("%d", &TAMA);
    }

    int array[TAMA], num1, num2;
    float sumaNumeros = 0;
    printf("ingrese los numeros del rango:");
    scanf("%d", &num1);
    scanf("%d", &num2);

    cargarArreglo(array,TAMA,num1,num2);
    mostrarArreglo(array,TAMA);
    printf("el mayor es = %d\n",buscarMayor(array,TAMA));
    sumarPosicionesImpares(array,TAMA);
}

//Resolucion de Funciones
void cargarArreglo(int array[], int TAMA, int num1, int num2){
    for (int i = 0; i < TAMA; i++)
    {
        array[i] = rand() % (num2 - num1 + 1) + num1;
    }
}

void mostrarArreglo(int array[],int TAMA){
    for (int i = 0; i < TAMA; i++)
    {
        printf("numero = %d\n",array[i]);
    }
    
}

int buscarMayor(int array[],int TAMA){
    int MasGrande = 0;
    for (int i = 0; i < TAMA; i++)
    {
        if (MasGrande < array[i])
        {
            MasGrande = array[i];
        }
    }
    return MasGrande;
}

void sumarPosicionesImpares(int array[],int TAMA){
    for (int i = 0; i < TAMA; i++)
    {
        if(i % 2 != 0){
            array[i] += 1;
        printf("los numeros incrementados impares son %d\n", array[i]);
        }
    }
    
}

void buscarPromedios(int array[],int TAMA){
    for (int i = 0; i < TAMA; i++)
    {
        if (array[i] % 2 != 0)
        {
            array[i] += 1;
        }
        
    }
    
}