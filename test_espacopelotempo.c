#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "function_espacopelotempo.c"

int main(void) {
    assert(fabs(espaco(80, 2, 0) - 160.0) < 0.01);
    assert(fabs(espaco(40, 2, 0) - 80.0) < 0.01);
    assert(fabs(espaco(40, 2, 3) - 86.0) < 0.01);

    printf("Todos os testes passaram!\n");
    printf("Criado por Valentina Andrade");

    return 0;
}
