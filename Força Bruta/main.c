#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_MAXIMO 7 //(6 d�gitos + 1 para o caractere nulo)

void forcaBruta(char senha[]) {
    char tentativa[TAMANHO_MAXIMO];
    int digitos = 1;

    while (digitos <= 6) {
        int i, j;
        int limite = 1;

        for (i = 0; i < digitos; i++)// Gera a string de tentativas
            tentativa[i] = '0';

        tentativa[digitos] = '\0';

        while (limite) {
            printf("Tentando senha: %s\n", tentativa);

            // Verifica se a senha atual � igual � senha fornecida
            if (strcmp(tentativa, senha) == 0) {
                printf("Senha encontrada: %s\n", tentativa);
                return;
            }

            // Incrementa a tentativa atual
            j = digitos - 1;
            while (j >= 0) {
                if (tentativa[j] < '9') {
                    tentativa[j]++;
                    break;
                } else {
                    tentativa[j] = '0';
                    j--;
                }
            }

            // Verifica se atingiu o limite m�ximo de d�gitos
            if (j < 0)
                limite = 0;
        }

        digitos++; // coloca a quantidade de d�gitos para a pr�xima tentativa
    }

    printf("Senha n�o encontrada.\n");
}

int main() {
    char senha[TAMANHO_MAXIMO];

    printf("Digite a senha de at� 6 d�gitos: ");
    scanf("%s", senha);

    if (strlen(senha) > 6) {
        printf("Erro: A senha n�o pode ter mais de 6 d�gitos.\n");
        return 1;
    }

    printf("Iniciando ataque de for�a bruta...\n");
    forcaBruta(senha);

    return 0;
}

