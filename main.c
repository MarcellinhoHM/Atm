#include <stdio.h>
#include "global.c"

// dar o valor do saldo
float saldo = 6942.00;

int main() { // no main cria a variavel que vai definir a escolha que checa esse valor pelo menu por um switch case
    int escolha;

    while (1) {
        menu();
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                deposito(&saldo);
                break;
            case 2:
                saque(&saldo);
                break;
            case 3:
                checkSaldo(saldo);
                break;
            case 4:
                printf("Saindo\n");
                return 0;
            default:
                printf("Escolha invalida.\n");
        }
    }
}
