#include <stdio.h>
#include <stdlib.h>

#define MAX 10 

typedef struct {
    int carros[MAX];
    int topo;
} Pilha;


void inicializar(Pilha *p) {
    p->topo = -1;
}


int estaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}


int estaVazia(Pilha *p) {
    return p->topo == -1;
}

void push(Pilha *p, int id) {
    p->topo++; 
    p->carros[p->topo] = id; 
}

int pop(Pilha *p) {
    int id = p->carros[p->topo]; 
    p->topo--; 
    return id; 
}
int main() {
    Pilha principal, secundaria;
    inicializar(&principal);
    inicializar(&secundaria);

    char comando;
    int id;

    while (scanf(" %c %d", &comando, &id) == 2) {
        if (comando == '0' && id == 0) {
            break;
        }

        if (comando == 'i') {
            if (estaCheia(&principal)) {
                printf("overflow\n");
            } else {
                push(&principal, id);
            }
            
        } else if (comando == 'r') {
            int encontrou = 0;
            while (!estaVazia(&principal)) {
                int carro_movido = pop(&principal);
                
                printf("%d,", carro_movido);
                
                if (carro_movido == id) {
                    encontrou = 1;
                    printf("\n");
                    break; 
                } else {
                    
                    push(&secundaria, carro_movido);
                }
            }

            
            if (!encontrou) {
                printf("underflow\n");
            }

            while (!estaVazia(&secundaria)) {
                push(&principal, pop(&secundaria));
            }
        }
    }

    return 0;
}