#include <stdio.h> 

int main() {

    printf("Hola mundo\n");

    int variable = 10; 
    int *puntero; 

    puntero = &variable;

    printf("1) Contenido del puntero: %d\n", *puntero);
    printf("2) Direccion de memoria almacenada por el puntero: %p\n", (void *) puntero);
    printf("3) Direccinn de memoria de la variable: %p\n", (void *) &variable);
    printf("4) Direccion de memoria del puntero: %p\n", (void *) &puntero);
    printf("5) Tamano de memoria utilizado por la variable: %zu bytes\n", sizeof(variable));

    
    return 0;
}

