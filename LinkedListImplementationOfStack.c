#include <stdio.h>
#define MAX 6

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if(top == MAX - 1)
    {

        printf("Stack Overflow. The stack is full.\n");
        return;
    }
    else
    {
        top++;
        stack_arr[top] = data;
        printf("%d has been pushed.\n", stack_arr[top]);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("The stack is empty.\n");
        return;
    }
    printf("%d has been popped.\n", stack_arr[top]);
    top--;
}
void peek(int index)
{

    if(index <= top && index > -1)
    {
        printf("%d is at index %d.\n", stack_arr[index], index);
    }
    else
    {
        printf("The entered index is invalid.");
    }
}

void isFull()
{
    if(top == MAX - 1)
    {
        printf("\nThe stack is full.\n");
        return;
    }
    else
    {
        printf("\nThe stack is not full.\n");
        return;
    }
}
void isEmpty()
{
    if(top == -1)
    {
        printf("\nThe stack is empty.\n");
        return;
    }
    else
    {
        printf("\nThe stack is not empty.\n");
        return;
    }
}

int main()
{
    int index;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();
    pop();
    pop();
    pop();
    push(12);
    push(13);
    push(14);
    push(15);

    printf("\nEnter the index --> ");
    scanf("%d", &index);
    peek(index);
    isEmpty();
    isFull();

    return 0;
}

