#include <stdio.h>

int main(){
    int x, y;
    printf("Introduce 2 numeros: ");
    scanf("%d %d", &x, &y);

    printf("Los numeros introducidos son\nx:%d y:%d\n", x, y);
    printf("Su suma es: %d\n", x + y);
    printf("\3\3\3\3\3\3\3\3\3");

    char nombre[10];
    int edad;
    float peso;
    printf("\nIntroduce tu Nombre: ");
    scanf("%s", nombre);
    printf("Introduce tu edad: ");
    scanf("%d", &edad);
    printf("Introduce tu peso: ");
    scanf("%f", &peso);

    printf("Nombre: %s\nEdad: %d\nPeso: %.3f\n", nombre, edad, peso);
    return 0;
}