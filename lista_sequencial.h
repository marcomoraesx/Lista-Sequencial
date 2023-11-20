
#ifndef LISTA_SEQUENCIAL_H
#define LISTA_SEQUENCIAL_H

#define MAX 1000

struct lista{
        int elementos[MAX];
        int particao;
};

void inicializar(struct lista *l);

int inserir_fim(struct lista *l, int valor);
int inserir_inicio(struct lista *l, int valor);
void exibir_lista(struct lista *l);
void reverso_lista(struct lista *l);
int concatenar(struct lista *l1, struct lista *l2);
int inserir_posicao(struct lista *l1, int valor, int posicao);
int inserir_ordem(struct lista *l1, int valor);
int remover_inicio(struct lista *l1);
int remover_fim(struct lista *l1);
int remover_posicao(struct lista *l1, int posicao);
int remover_valor(struct lista *l, int valor);
void procurar(struct lista *l, int valor);
void somatorio(struct lista *l);
void tamanho(struct lista *l);
int quadrado(struct lista *l);
int qtd_primo(struct lista *l);
int eh_primo(int num);
void sair(int num);

#endif
