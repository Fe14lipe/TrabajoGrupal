#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "lectura.h"

int leerEnteroPositivo(char*mensaje){
    int valor;
    do{
        printf("ingrese un dato: ");
        scanf("%d",&valor);
    }while(valor <= 0);
    return valor;
}

int leerEntero (char*mensaje){
    int valor;
    printf("%s",valor);
    scanf("%d",&valor);
    return valor;
}

int leerEnteroEntre(char* mensaje, int a, int b) {
    int num;
    do {
        printf("%s", mensaje);
        scanf("%d", &num);
        if (num < a || num > b) {
            printf("Error: Debe ingresar un número entre %d y %d.\n", a, b);
        }
    } while (num < a || num > b);
    return num;
}

float leerFlotantePositivo(char*mensaje){
    float valor;
    do{
        printf("Ingrese un dato: ");
        scanf("%f",&valor);
    }while(valor <= 0);
    return valor;
}

float leerFlotanteEntre(char* mensaje, float min, float max) {
    float num;
    do {
        printf("%s", mensaje);
        scanf("%f", &num);
        if (num < min || num > max) {
            printf("Error: Debe ingresar un número entre %.2f y %.2f.\n", min, max);
        }
    } while (num < min || num > max);
    return num;
}

float leerFlotante (char*mensaje){
    float valor;
    printf("%s",valor);
    scanf("%f",&valor);
    return valor;
}

float leerFlotanteMayorIgual(char* mensaje, float lim){
    float valor;
    do{
        printf("Ingrese un dato: ");
        scanf("%f",&valor);
    }while(valor < lim);
    return valor;
}

char leerCaracter (char*mensaje){
    char caracter;
    printf("%s", mensaje);
    scanf("%c", &caracter);
    return caracter;
}

void leerProducto(char *producto) {
    fgets(producto, 30, stdin);
    size_t len = strlen(producto);
    if (len > 0 && producto[len-1] == '\n') {
        producto[len-1] = '\0';
    }
}

void leerFlotante1(float *precio) {
    scanf("%f", precio);
    limpiarBuffer();
}

void leerEntero1(int *cantidad) {
    scanf("%d", cantidad);
    limpiarBuffer();
}

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
