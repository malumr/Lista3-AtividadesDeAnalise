#include <stdio.h>// Biblioteca para entrada e saída
int calcularResultado(int v[], int n); // Declara a função calcularResultado
int main() {
	resultado
	int vetor[5], i, resultado;// Declara o vetor, uma variável i e uma variável para o resultado
	for (i = 0; i < 5; i++) { // Loop para preencher o vetor
		vetor[i] = i * 2; // Cada posição do vetor recebe o valor de i * 2
	}
	resultado = calcularResultado(vetor, 5); // Calcula o resultado chamando a função
	calcularResultado
	printf("O resultado é: %d\n", resultado); // Imprime o resultado da soma
	return 0; // Finaliza o programa
}
// Função que calcula a soma dos elementos de um vetor
int calcularResultado(int v[], int n) {
	int i, soma = 0;
	for (i = 0; i < n; i++) { // Loop para somar os elementos do vetor
		soma += v[i]; // Soma cada valor do vetor C  variável soma
	}
	return soma; // Retorna o valor total da soma
}
