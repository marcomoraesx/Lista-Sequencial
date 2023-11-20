
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lista_sequencial.h"

#define MAX 1000



void inicializar(struct lista *l) {
    l->particao = 0;
}

int inserir_fim(struct lista *l, int valor) {
    if(l->particao < MAX) {
        l->elementos[l->particao] = valor;
        l->particao++;
        return 1;
    } else {
        return 0;
    }
}


int inserir_inicio(struct lista *l, int valor) {
    //movimentação de todos os valores para a direita
    //repetição do fim para o início
    int i;
    if(l->particao < MAX) {
        for(i=l->particao; i >0; i--) {
        l->elementos[i] = l->elementos[i-1];
        }

        l->elementos[0] = valor;
        l->particao++;

        return 1;
    } else {
        return 0;
    }
}

void exibir_lista(struct lista *l){
    int i;
    for(i=0; i < l->particao; i++) {
        printf("[%d]", l->elementos[i]);
    }
    printf("\n");
}

void reverso_lista(struct lista *l){
    int i;
    for(i=l->particao - 1; i >= 0; i--) {
        printf("[%d]", l->elementos[i]);
    }
    printf("\n");
}

int concatenar(struct lista *l1, struct lista *l2){
    int i;
    if(l1->particao + l2->particao < MAX) {
        for(i=0; i < l2->particao; i++) {
            inserir_fim(l1, l2->elementos[i]);
        }
        return 1;
    } else {
        return 0;
    }
}

int inserir_posicao(struct lista *l1, int valor, int posicao){
    int i;
    if(l1->particao < MAX) {
        if (posicao <= l1->particao){
            for(i=l1->particao; i > posicao; i--) {
                l1->elementos[i] = l1->elementos[i-1];
            }

            l1->elementos[posicao] = valor;
            l1->particao++;

            return 1;

        } else {
            l1->elementos[l1->particao] = valor;
            l1->particao++;

            return 0;
        }
    } else {
        return 0;
    }
}

int inserir_ordem(struct lista *l1, int valor){
    int i;
    int posicao;
    if(l1->particao < MAX) {
        for(i = 0; i <= l1->particao; i++){
            if(l1->elementos[i] >= valor){
                posicao = i;
                break;
            } else if (l1->elementos[i] <= valor){
                posicao = i;
            }
        }

        inserir_posicao(l1, valor, posicao);

        return 1;

    } else {
        return 0;
    }
}

int remover_inicio(struct lista *l1){
    int i;
    if(l1->particao < MAX) {
        for(i = 0; i < l1->particao; i++){
            l1->elementos[i] = l1->elementos[i+1];
        }

        l1->particao--;

        return 1;

    } else {
        return 0;
    }
}

int remover_fim(struct lista *l1){
    if(l1->particao < MAX) {
        l1->particao--;

        return 1;

    } else {
        return 0;
    }
}

int remover_posicao(struct lista *l1, int posicao){
    int i;
    if(l1->particao < MAX) {
        if (posicao < l1->particao){
            for(i = posicao; i < l1->particao; i++){
                l1->elementos[i] = l1->elementos[i+1];
            }

            l1->particao--;

            return 1;

        } else {
            return 0;
        }

    } else {
        return 0;
    }
}

int remover_valor(struct lista *l1, int valor){
    int i;
    int posicao;
    if(l1->particao < MAX) {
        for (i = 0; i < l1->particao; i++){
            if(l1->elementos[i] == valor){
                posicao = i;
                break;
            } else if (l1->elementos[i] != valor){
                posicao = l1->particao + 1;
            }
        }

        remover_posicao(l1, posicao);

        return 1;

    } else {
        return 0;
    }
}

void procurar(struct lista *l, int valor){
    int i;
    int posicao = -1;

    for(i = 0; i < l->particao; i++){
        if(l->elementos[i] == valor){
            posicao = i;
            break;
        } else {
            posicao = -1;
        }

    }

    printf("%d\n", posicao);

    if (l->particao == 0){
        printf("Lista esta vazia!\n");
    }

}

void somatorio(struct lista *l){
    int i;
    int somatorio = 0;

    for(i = 0; i < l->particao; i++){
        somatorio = somatorio + l->elementos[i];
    }

    printf("%d\n", somatorio);
}

void tamanho(struct lista *l){
    printf("%d\n", l->particao);
}

int quadrado(struct lista *l){
    int i;

    for(i = 0; i < l->particao; i++){
        l->elementos[i] = l->elementos[i] * l->elementos[i];
    }

    return 1;

}


void sair(int num){

    exit(num);
}


int eh_primo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int qtd_primo(struct lista *l) {
    int contador = 0;

    for (int i = 0; i < l->particao; i++) {
        if (eh_primo(l->elementos[i])) {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 1;
}


