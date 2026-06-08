#include <stdio.h>

int main() {
    printf("Deu certo!\n");

    int a, b, soma, multi, divi;
    
    printf("escreva os numeros que quer calcular: ");
    scanf("%d %d", &a, &b);

    
    soma = a + b;
    multi = a * b;
    divi = a / b; 

    printf("A soma eh: %d\n", soma);
    printf("A multiplicacao eh: %d\n", multi);
    printf("A divisao eh: %d\n", divi);

    return 0;
}