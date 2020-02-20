//6210406645 Praew Paksanont//
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void insert_list(struct node **head, int key){
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = key;

    if (*head == NULL){
        node->next = *head;
        *head = node;
    }
    else{
        struct node *tmp = *head;
        struct node *prev = NULL;
        for(; tmp ; tmp = tmp->next){
            if (tmp == NULL || tmp->data >= node->data) {
                break;
            }
            prev = tmp;
        }
        node->next = tmp;
        if (prev == NULL) {
            *head = node;
        }
        else {
            prev->next = node;
        }
    }
}
void print(struct node *head) {
    struct node *temp = head;
    for (temp=head; temp; temp = temp->next)
    printf("%d\n", temp->data);
}
int main() {
    struct node *head = NULL;
    int a;
    while (scanf("%d", &a) == 1) {
        if (a == -1){
            break;
        }
        else{
            insert_list(&head,a); 
        }
    }
    print(head);
}
