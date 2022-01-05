#include<stdio.h>
#include<stdlib.h>


//Tipo 'nó'
struct node {
 int item;
 node* next;
};

//Inicia o ponteiro apontando para NULL
void inicializar(node** head){
 *head = NULL;
}
void insereDepois(node** head, node* x, node* t) {
 if (x == NULL) {
 *head = t;
 (*head)->next = NULL;
 } else {
 t->next = x->next;
 x->next = t;
 }
}
//Por que estava retornando valor?
void removeDepois(node* x) {
 node* t;
 t = x->next;
 x->next = t->next;
 
}
node* novoNo(int item, node* n){
 node* t =(node*) malloc(sizeof (struct node));
 t->item = item;
 t->next = n;
 return t;
}
void destroiNo(node* x){
 free(x);
}
void imprimeLista(node* head){
 node* t;
 for (t = head; t != NULL; t = t->next) {
 printf ("%d ", t->item);
 }
 printf ("\n");
}
int listaVazia(node* x) {
 return (x == NULL);
}

void destroiLista(node ** head) {
 node * t;
 t = *head;
 while (t != NULL) {
 *head = t->next;
 free(t);
 t = *head;
 }
 free(*head);
 head = NULL;
}
int main (){

 node *head;
 node *aux;
 inicializar(&head);
 insereDepois(&head, head, novoNo(1, NULL));
 insereDepois(&head, head, novoNo(2, NULL));
 insereDepois(&head, head, novoNo(3, NULL));
 insereDepois(&head, head, (aux = novoNo(4, NULL)));
 insereDepois(&head, head, novoNo(5, NULL));
 insereDepois(&head, head, novoNo(6, NULL));
 imprimeLista(head);
 removeDepois(aux);
 imprimeLista(head);
 destroiLista(&head);
 return 0;
 
}
