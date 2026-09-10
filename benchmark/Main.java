public class Main {
    public static void main(String[] args) {
        final long N = 100_000_000L;
        long resultado = 0;

        long inicio = System.nanoTime();

        for (long i = 0; i < N; i++) {
            resultado += (i * 3) + 7;
        }

        long fim = System.nanoTime();

        double tempo = (fim - inicio) / 1_000_000_000.0;

        System.out.println("Resultado: " + resultado);
        System.out.println("Tempo: " + tempo + " segundos");
    }
}