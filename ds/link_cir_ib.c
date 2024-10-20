#include <stdio.h>
#include <stdlib.h>

struct n1
{
    int data;
    struct n1 *next;
};

int main()
{
    struct n1 *head;
    struct n1 *p, *r, *s, *t, *k;

    p = (struct n1 *)malloc(sizeof(struct n1));

    printf("Enter data for node 1: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;

    int i = 1;

    while (i < 10)
    {
        struct n1 *q;
        q = (struct n1 *)malloc(sizeof(struct n1));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &q->data);
        p->next = q;
        q->next = head;
        p = p->next;
        i++;
    }

    r = head;

    printf("Given source link lists: \n");

    do
    {
        printf("%d ", r->data);
        r = r->next;
    }while(r != head);

    free(r);

    s = (struct n1 *)malloc(sizeof(struct n1));

    printf("\nEnter data for new node: ");
    scanf("%d", &s->data);

    s->next = NULL;

    t = head;

    do
    {
        t = t->next;
    }while(t->next != head);

    s->next = t->next;

    t->next = s;

    head = s;

    k = head;

    printf("\nUpdated source link lists: \n");

    do
    {
        printf("%d ", k->data);
        k = k->next;
    }while(k != head);

}