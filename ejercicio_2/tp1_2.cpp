#include <stdio.h> 

// Función que calcula el cuadrado de un número
int cuadrado(int num) {
    return num * num;
}

// Función que calcula el cuadrado de un número y lo almacena en el mismo puntero
void calcularCuadrado(int *num) {
    *num = (*num) * (*num);
}

// Función que muestra la dirección y el contenido de una variable
void mostrarDireccionYContenido(int *variable) {
    printf("Dirección de memoria: %p\n", (void *)variable);
    printf("Contenido: %d\n", *variable);
}

// Función que intercambia los valores entre dos variables
void Invertir(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Función que ordena dos valores
void orden(int *a, int *b) {
    if (*a > *b) {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}

int main() {
    int numero = 5;
    int resultado = cuadrado(numero);
    printf("El cuadrado de %d es %d\n", numero, resultado);

    printf("El valor original es: %d\n", numero);
    calcularCuadrado(&numero);
    printf("El cuadrado es: %d\n", numero);

    mostrarDireccionYContenido(&numero);

    int numero1 = 5;
    int numero2 = 10;
    
    printf("Antes de intercambiar:\n");
    printf("numero1: %d, numero2: %d\n", numero1, numero2);
    
    Invertir(&numero1, &numero2);
    
    printf("Después de intercambiar:\n");
    printf("numero1: %d, numero2: %d\n", numero1, numero2);

    printf("Antes de ordenar:\n");
    printf("numero1: %d, numero2: %d\n", numero1, numero2);
    
    orden(&numero1, &numero2);
    
    printf("Después de ordenar:\n");
    printf("numero1: %d, numero2: %d\n", numero1, numero2);
    return 0;
}