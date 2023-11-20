#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lista_sequencial.h"


int main(int argc, char *argv) {
    struct lista *l1, *l2;
    l1 = (struct lista *) malloc(sizeof(struct lista));
    l2 = (struct lista *) malloc(sizeof(struct lista));
    inicializar(l1);
    inicializar(l2);
    int valor = 0;
    int posicao = 0;
    int opc = 0;

    do {
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("=============================== Escolha uma função ===============================\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("[1] Inicializar           [2] Inserir Inicio      [3] Inserir Fim\n[4] Inserir Posicao       [5] Inserir Ordem       [6] Exibir\n[7] Reverso               [8] Remover Inicio      [9] Remover Fim\n[10] Remover Posicao      [11] Remover Valor      [12] Procurar\n[13] Tamanho              [14] Somatorio          [15] Quadrado\n[16] Qtde Primo           [17] Concatenar         [0] Sair\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("=============================== Escolha uma função ===============================\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

        printf("                    OBS: Já existem duas listas inicializadas!!\n\n");

        scanf("%d", &opc);

        switch (opc) {
            case 1:
                inicializar(l1);
                printf("Inicializou!\n");
                break;
            case 2:
                printf("Informe um valor para inserir no início: ");
                scanf("%d", &valor);
                inserir_inicio(l1, valor);
                printf("Inserido\n");
                exibir_lista(l1);
                break;
            case 3:
                printf("Informe um valor para inserir no fim: ");
                scanf("%d", &valor);
                inserir_fim(l1, valor);
                printf("Inserido!\n");
                exibir_lista(l1);
                break;
            case 4:
                printf("Informe um valor: ");
                scanf("%d", &valor);
                printf("Posição desejada: ");
                scanf("%d", &posicao);
                inserir_posicao(l1, valor, posicao);
                printf("Inserido!\n");
                exibir_lista(l1);
                break;
            case 5:
                printf("Informe um valor: ");
                scanf("%d", &valor);
                inserir_ordem(l1, valor);
                printf("Inserido!\n");
                exibir_lista(l1);
                break;
            case 6:
                exibir_lista(l1);
                break;
            case 7:
                reverso_lista(l1);
                break;
            case 8:
                remover_inicio(l1);
                printf("Removido!\n");
                exibir_lista(l1);
                break;
            case 9:
                remover_fim(l1);
                printf("Removido!\n");
                exibir_lista(l1);
                break;
            case 10:
                printf("Informe a posição para remover: ");
                scanf("%d", &posicao);
                remover_posicao(l1, posicao);
                printf("Removido!\n");
                exibir_lista(l1);
                break;
            case 11:
                printf("Informe o valor para remover: ");
                scanf("%d", &valor);
                remover_valor(l1, valor);
                printf("Removido!\n");
                exibir_lista(l1);
                break;
            case 12:
                printf("Informe o valor a ser procurado: ");
                scanf("%d", &valor);
                procurar(l1, valor);
                break;
            case 13:
                tamanho(l1);
                break;
            case 14:
                somatorio(l1);
                break;
            case 15:
                quadrado(l1);
                exibir_lista(l1);
                break;
            case 16:
                qtd_primo(l1);
                break;
            case 17:
                inserir_fim(l2, 11);
                inserir_fim(l2, 12);
                inserir_ordem(l2, 50);
                inserir_ordem(l2, 13);

                concatenar(l2, l1);
                exibir_lista(l2);
                break;
            case 0:
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opc != 0);

    return 0;
}
