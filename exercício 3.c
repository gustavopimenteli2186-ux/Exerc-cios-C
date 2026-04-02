#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Nome: %s, Idade: %d\n", nome, idade);

    return 0;
}
