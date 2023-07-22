#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
struct list
{   
	int data;
    struct list *next;
};

struct list *createlist(int data[], int n)
{   
	struct list *head = 0, *p, *q;
    int i;

    head = (struct list *) malloc(sizeof(struct list));
    head->data = data[0];
    p = q = head;
    for(i=1; i<n; i++)
    {   p = (struct list *) malloc(sizeof(struct list));
        p->data = data[i]; q->next = p; q = p;
    }
    p->next = NULL;
    return head;
}

/**********found**********/
int func(___1___ head)
{   int pmax = head->data;
    struct list *p = head->next;
    while(p != NULL)
    {   if(p->data > pmax) pmax = p->data;
/**********found**********/
        p = ___2___;
    }
/**********found**********/
    ___3___
}

void main()
{
    int data[] = {123, 21, 65, 789, 32, 310, 671, 651, 81, 101}, pmax;
 
    struct list *head;
    head = createlist(data, 10);
    pmax = func(head);
    printf("Max=%d\n", pmax);
}
