#include <stdio.h>
#include <stdlib.h>

#include "function_validar.c"

int main(int argc, char *argv[])
{
    char lista[9] = {0};

    if(argc == 10)
    {
        for(int i = 0; i < 9; i++)
        {
            lista[i] = argv[i + 1][0];

            if(!validar(lista[i]))
            {
                printf("caractere invalido\n");
                return 1;
            }
        }
    }
    else
    {
        for(int i = 0; i < 9; i++)
        {
            do
            {
                printf("Digite o caractere %d da lista: ", i + 1);
                scanf(" %c", &lista[i]);

                if(!validar(lista[i]))
                    printf("caractere invalido\n");

            } while(!validar(lista[i]));
        }
    }

    for(int i = 0; i < 9; i++)
    {
        printf("Caractere %d: %c\n", i + 1, lista[i]);
    }

    printf("Criado por Luís Guilherme\n");
    return 0;
}
