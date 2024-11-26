#include <stdio.h>
// Define a estrutura 'pessoa' com peso, idade e altura
typedef struct {
	double peso;
	int idade;
	double altura;
} pessoa;
// Função que imprime os dados de uma pessoa
void imprimePessoa(pessoa p) {
	printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura);
}
// Função que lê os dados de uma pessoa a partir da entrada do usuário
void ColetaDados(pessoa *p) {
	printf("Digite o peso: ");
	scanf("%lf", &p->peso);
	printf("Digite a idade: ");
	scanf("%d", &p->idade);
	printf("Digite a altura: ");
	scanf("%lf", &p->altura);
}
int main() {
	pessoa pessoas[5]; // Declara um array de 5 pessoas
// Lê os dados de cada pessoa do usuário
	for (int i = 0; i < 5; i++) {
		printf("Pessoa %d:\n", i + 1);
		ColetaDados(&pessoas[i]);
	}
// Imprime os dados de cada pessoa
	for (int i = 0; i < 5; i++) {
		printf("Dados da Pessoa %d:\n", i + 1);
		imprimePessoa(pessoas[i]);
	}
	return 0;
}