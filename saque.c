#include <stdio.h>
#include "global.c"

void saque(float *saldo) { // chama pra fazer o saque
    float valor;
    printf("Insira o valor do saque: ");
    scanf("%f", &valor);

    if (valor <= 0) { // mesmo que o do deposito so adiciona um else if checando se tem saldo o suficiente
        printf("Valor invalido, o saque precisa ser positivo.\n");
    } else if (valor > *saldo) {
        printf("Saldo insuficiente, saldo disponivel: R$%.2f\n", *saldo);
    } else {
        *saldo -= valor;
        printf("Saque realizado, novo saldo: R$%.2f\n", *saldo);
    }
}
