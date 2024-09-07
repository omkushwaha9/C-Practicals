#include <stdio.h>
#include <stdlib.h>
int stack[10];
int max = 10;
int top = -1;
void push();
void pop();
void display();
int main()
{
    int ch;
    int choice;
    do
    {
        printf("\n1.push \n2.pop \n3.display");
        printf("Enter your Choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
        printf("You want to continue?");
        scanf("%d", &ch);
    } while (ch == 1 || ch == 2);
    return 0;
}
void push()
{
    int item;

    if (top == max - 1)
    {
        printf("stack is full");
        exit(0);
    }
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}
void pop()
{
    int item;
    if (top == top - 1)
    {
        printf("Stack is underflow");
    }
    else
    {
        top = top - 1;
        stack[top] = item;
    }
}
void display()
{
}