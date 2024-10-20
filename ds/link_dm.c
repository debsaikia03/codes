#include <stdio.h>
#include <stdlib.h>

struct n1
{
    int data;
    struct n1 *next;
};

int main()
{
    struct node *head;
    struct n1 *p, *l, *k, *s, *r;

    p = (struct n1 *)malloc(sizeof(struct n1));

    printf("Enter data for 1 node: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;

    int i = 1;

    while (i < 10)
    {
        struct n1 *q;
        q = (struct n1 *)malloc(sizeof(struct n1));
        printf("Enter data for %d node: ", i + 1);
        scanf("%d", &q->data);
        p->next = q;
        q->next = NULL;
        p = p->next;
        i++;
    }

    l = head;

    printf("Given source link lists: \n");

    while (l != NULL)
    {
        printf("%d ", l->data);
        l = l->next;
    }

    k = head;

    int c = 1;
    int n;

    printf("\nEnter position of the node to be deleted: ");
    scanf("%d", &n);

    while (c < n && k != NULL)
    {
        s = k;
        k = k->next;
        c++;
    }

    s->next = k->next;

    free(k);

    r = head;

    printf("Updated link lists:\n");

    while (r != NULL)
    {
        printf("%d ", r->data);
        r = r->next;
    }
}