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

    s = head;

    int temp;

    while(s->next != NULL)
    {
        k=s->next;
        
        while(k != NULL)
        {
            if(s->data > k->data)
            {
             temp= s->data;
             s->data=k->data;
             k->data=temp;
            }
            k=k->next;
        }
        s=s->next;
    }

    f = head;

    printf("Sorted linked lists: \n");

    while (f != NULL)
    {
        printf("%d ", f->data);
        f = f->next;
    }
}