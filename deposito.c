#include <stdio.h>
#include "global.c"

void deposito(float *saldo) {// chama pra fazer o deposito
    float valor;
    printf("Insira o valor do deposito: ");
    scanf("%f", &valor);

    if (valor <= 0) {// se o valor for menor ou igual a 0 da um erro se nao, da certo
        printf("Valor invalido, o deposito precisa ser positivo.\n");
    } else {
        *saldo += valor; //botando ponteiro no saldo deixa as mudancas feitas nas funcoes serem mostradas toda vez que saldo for chamado
        printf("Deposito realizado, novo saldo: R$%.2f\n", *saldo);
    }
}
