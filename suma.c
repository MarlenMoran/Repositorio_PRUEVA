#include <stdio.h>

int main()
{
    int a1,b1, suma;
    printf("Introducir primer numero"); //Para poder realizar la suma de diferentes numeros enteros
    scanf ("%d", &a1);
    printf("Introducir segundo numero"); 
    scanf ("%d", &b1);
    suma=a1+b1;
    printf("La suma es= %d",suma);
    printf("\n"); // Evitar translapamiento de app y línea comando
    return 0;

}
