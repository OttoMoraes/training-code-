const N = 100_000_000;
let resultado = 0;

const inicio = process.hrtime.bigint();

for (let i = 0; i < N; i++) {
    resultado += (i * 3) + 7;
}

const fim = process.hrtime.bigint();

const tempo = Number(fim - inicio) / 1e9;

console.log("Resultado:", resultado);
console.log("Tempo:", tempo.toFixed(6), "segundos");