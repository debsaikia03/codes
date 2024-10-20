#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node *a, struct node *b, struct node *c)
{
    struct node *s;
    s = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for new node: ");
    scanf("%d", &s->data);

    if (a == c && b != c->next)
    {
        s->next = a;
        c = s;
    }

    else
    {
        a->next = s;
        s->next = b;
    }

    printf("\nUpdated linked lists:\n");

    while (c != NULL)
    {
        printf("%d ", c->data);
        c = c->next;
    }
}

int main()
{
    struct node *head, *p, *r, *q;

    int n;

    printf("Enter no. of nodes: ");
    scanf("%d", &n);

    p = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for node 1: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;
    q = p;

    int i = 1;
    while (i < n)
    {
        struct node *q;
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &q->data);
        p->next = q;
        q->next = NULL;
        p = p->next;
        i++;
    }

    r = head;

    printf("Given source link lists: \n");

    while (r != NULL)
    {
        printf("%d ", r->data);
        r = r->next;
    }

    struct node *k, *t, *w;

    t = head;
    int y;

    printf("Enter position to be inserted: ");
    scanf("%d", &y);

    if (y == 1)
    {
        k = t;
    }

    else
    {
    i = 1;
    while (i < y && t != NULL)
    {
        k = t;
        t = t->next;
        i++;
    }
    }

    insert(k, t, head);
}
