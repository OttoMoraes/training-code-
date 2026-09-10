import time

N = 100_000_000
resultado = 0

inicio = time.perf_counter()

for i in range(N):
    resultado += (i * 3) + 7

fim = time.perf_counter()

tempo = fim - inicio

print("Resultado:", resultado)
print(f"Tempo: {tempo:.6f} segundos")