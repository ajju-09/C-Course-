#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

// Function for insertion an element in linked list at front
struct node *insertion_at_front(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    ptr->next = head;
    ptr->data = data;
}

// Function for insertion of element in linked list at index number
struct node *insertion_at_index(struct node *head, int data, int index)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Function for insertion of element in linked list at end
struct node *insertion_at_end(struct node *head, int data)
{
    struct node *ptr;
    struct node *p = head;

    ptr = (struct node *)malloc(sizeof(struct node));

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->data = data;
    ptr->next = NULL;
    return head;
}

// Function for insertion of element in linked list after a node
struct node *insertion_after_node(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    ptr->next = prevnode->next;
    ptr->data = data;
    prevnode->next = ptr;

    return head;
}

// Function for deletion of an element from linked list at front
struct node *deletion_at_front(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Function for deletion of an element from linked list at index
struct node *deletion_at_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
    
}

// Function for deletion of an element from linked list at end
struct node *deletion_at_end(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    } 
    p->next = NULL;
    free(q);
    return head;
}

// Function for deletion of an element from linked list at give value
struct node *deletion_after_node(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->data != value)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}

//Traversal for simple linked list
// void traversal(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element :%d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// Traversal for Circular linked list
// void traversal(struct node *head)
// {
//    struct node *ptr = head;
//    do
//    {
//     printf("%d\n",ptr->data);
//     ptr = ptr->next;
//    } while (ptr != head);
   
// }

// Reverse traversal for doubly linked list
void traversal(struct node *fourth)
{
    struct node *ptr = fourth;
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->prev;

    } while (ptr != NULL);
    
}

struct node *insert_at_front(struct node *head, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head->next;
    ptr->data = data;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p at last node
    p->next = ptr;
    ptr->next = head;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocating space in heap memory
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // point head to second
    head->prev = NULL;
    head->data = 7;
    head->next = second;

    // point second to third
    second->prev = head;
    second->data = 11;
    second->next = third;

    // point third to fourth
    third->prev = second;
    third->data = 25;
    third->next = fourth;

    // point fourth to null
    fourth->prev = third;
    fourth->data = 30;
    fourth->next = NULL;



    // printf("Linked list before Deletion:\n");
    // head = insert_at_front(head, 45);
    // traversal(head);

    // head = insertion_at_front(head, 45);
    // printf("After insertion at first :\n");
    // traversal(head);

    // head = insertion_at_index(head, 55, 2);
    // printf("After insertion at index :\n");
    // traversal(head);

    // head = insertion_at_end(head, 67);
    // printf("After insertion at end:\n");
    // traversal(head);

    // head = insertion_after_node(head, second, 33);
    // printf("After insertion after node:\n");
    // traversal(head);

    // head = deletion_at_front(head);
    // printf("After deletion at front:\n");
    // traversal(head);

    // head = deletion_at_index(head, 2);
    // printf("After deletion at index:\n");
    // traversal(head);

    // head = deletion_at_end(head);
    // printf("After deletion at end:\n");
    // traversal(head);

    // head = deletion_after_node(head, 25);
    // printf("After deletion at give value:\n");
    // traversal(head);

    // traversal function call for doubly linked list
    traversal(fourth);
    return 0;
}