#include <iostream>
#include <chrono>

int main() {
    const long long N = 100000000;
    volatile long long resultado = 0;

    auto inicio = std::chrono::high_resolution_clock::now();

    for (long long i = 0; i < N; i++) {
        resultado += (i * 3) + 7;
    }

    auto fim = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> tempo = fim - inicio;

    std::cout << "Resultado: " << resultado << "\n";
    std::cout << "Tempo: " << tempo.count() << " segundos\n";

    return 0;
}