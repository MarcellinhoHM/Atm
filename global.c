//define o saldo como variavel global
#ifndef global
#define global

extern float saldo;

void menu();
void deposito(float *saldo);
void saque(float *saldo);
void checkSaldo(float saldo);

#endif
