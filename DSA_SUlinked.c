#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function who cheques stack is empty or not
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

// Function who cheques stack is full or not
int isFull(struct node *top)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}

// Function for putting an element in stack
struct node *Push(struct node *top, int x)
{
    if(isFull(top))
    {
        printf("The stack is overflow\n");
    }
    else
    {
        struct node *n = (struct node*) malloc (sizeof(struct node));

        n->data = x;
        n->next = top;
        top = n;
        return top;
    }

}

// Function for remove an element from stack
int Pop(struct node **top)
{
    if(isEmpty(*top))
    {
        printf("The stack is underflow\n");
    }
    else
    {
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

// traverse the linked list
void traversal(struct node *ptr)
{
    printf("\n");
    while (ptr != NULL)
    {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *top = NULL;
    top = Push(top, 11);
    top = Push(top, 22);
    top = Push(top, 33);
    top = Push(top, 44);
    top = Push(top, 55);
    top = Push(top, 66);
    int element = Pop(&top);
    //  element = Pop(&top);
    printf("The poped element is %d", element);
    traversal(top);
    return 0;
}