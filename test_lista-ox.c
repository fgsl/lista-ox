#include <stdio.h>
#include <assert.h>

#include "function_validar.c"

int main()
{
    assert(validar('X') == 1);
    assert(validar('O') == 1);
    assert(validar('A') == 0);

    printf("Todos os testes passaram com sucesso!\n");

    printf("Criado por Luís Guilherme\n");
    return 0;
}
