#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int value)
{
    if(isFull(ptr))
    {
        printf("Stack is Overflow, You cannot push %d in stack\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Underflow\n");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }

}

int peek(struct stack *s, int i)
{
    int index = s->top - i + 1;
    if (index < 0)
    {
        printf("Invalid number\n");
        return -1;
    }
    else
    {
        return s->arr[index];
    }
    
}

int main()
{
    struct stack *s = (struct stack *) malloc (sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("Before pushing Value, Full : %d \n",isFull(s));
    printf("Before pushing Value, Empty : %d \n",isEmpty(s));
    push(s, 11);
    push(s, 22);
    push(s, 33);
    push(s, 44);
    push(s, 55);
    push(s, 66);
    // push(s, 77);
    printf("After pushing Value, Full : %d \n",isFull(s));
    printf("After pushing Value, Empty: %d \n",isEmpty(s));

    // printf("Popped element is %d\n",pop(s));
    // printf("Popped element is %d\n",pop(s));
    // printf("Popped element is %d\n",pop(s));
    // printf("Popped element is %d\n",pop(s));
    // printf("Popped element is %d\n",pop(s));
    // printf("Popped element is %d\n",pop(s));

    //Taking inputs from users.
    // for (int i = 0; i < s->size; i++)
    // {
    //     printf("Element :");
    //     scanf("%d", &s->arr[i]);
    //     s->top++;
    // }

    //Printing output for users
    // for (int i = 0; i < s->size; i++)
    // {
    //     printf("Element in stack :%d\n", s->arr[i]);
    // }
for (int j = 1; j <= s->top+1; j++)
{
    printf("The value at position %d is %d\n", j, peek(s,j));
}


    return 0;
}