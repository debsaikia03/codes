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
    struct n1 *p, *r, *f, *s, *k;

    int n;

    printf("Enter no. of nodes: ");
    scanf("%d", &n);

    p = (struct n1 *)malloc(sizeof(struct n1));

    printf("Enter data for 1 node: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;

    int i = 1;

    while (i < n)
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

    r = head;

    printf("Given source link lists: \n");

    while (r != NULL)
    {
        printf("%d ", r->data);
        r = r->next;
    }

    f = head;

    while (f->next != NULL && f->next->next != NULL)
    {
        f = f->next->next;
    }

    if (f->next == NULL)
    {
        printf("\nThe given no. of nodes in the link lists is ODD.");
    }

    else if (f->next->next == NULL)
    {
        printf("\nThe given no. of nodes in the link lists is EVEN.");
    }
}