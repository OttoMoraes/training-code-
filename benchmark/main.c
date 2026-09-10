#include <stdio.h>
#include <time.h>

int main() {
    const long long N = 100000000;
    volatile long long resultado = 0;

    clock_t inicio = clock();

    for (long long i = 0; i < N; i++) {
        resultado += (i * 3) + 7;
    }

    clock_t fim = clock();

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Resultado: %lld\n", resultado);
    printf("Tempo: %.6f segundos\n", tempo);

    return 0;
}