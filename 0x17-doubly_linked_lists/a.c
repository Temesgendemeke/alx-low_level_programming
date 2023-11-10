#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int n;
    struct node *nxt;
    struct node *prev;
}node;

int main()
{
    node *first = malloc(sizeof(node));
    node *sec = malloc(sizeof(node));
    node *thrd = malloc(sizeof(node));

    node *head = first;
    first->prev = NULL;
    node*

    first->n = 50;
    sec-> n = 100;
    thrd->n = 200;
    first->nxt = sec;
    sec->nxt = thrd;
    thrd->nxt = NULL;

    sec->prev = first;
    thrd->prev = sec;


    while(head != NULL)
    {
        printf("%d\n", head->n);
        head = head->nxt;
    }





    return 0;
}