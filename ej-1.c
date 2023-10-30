#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 300


int main(){
    int TAMA = 0;
    printf("Ingrese el tamanio que quiera de su array, no pasar de 15\n");
    scanf("%d", &TAMA);
    while (TAMA > 15)
    {
        printf("Ingrese el tamanio que quiera de su array, no pasar de 15");
        scanf("%d", &TAMA);
    }

    int array[TAMA], MasGrande = 0;
    float sumaNumeros = 0;
    for (int i = 0; i < TAMA; i++)
    {
        printf("ingrese los numeros que introducira en el array\n");
        scanf("%d", &array[i]);
        printf("el numero del array[%d]:\n", i);
    }
    for (int j = 0; j < TAMA; j++)
    {
        
        /* if (MasGrande < array[j])
        {
            MasGrande = array[j];
        }
        if ((j % 2) != 0)
        {
            sumaNumeros += array[j];
        } */
        /* if (array[j] >= 300)
        {
            printf("Cambie el valor\n");
            scanf("%d", &array[j]);
        } */
        /*if (array[j] % 2 != 0)
        {
            array[j] += 1;
        } */
        printf("%d\n", array[j]);
    }
    
    /* sumaNumeros = sumaNumeros / TAMA;
    printf("El numero mas grande es %d\n", MasGrande);
    printf("El promedio es %.2f\n", sumaNumeros); */

}