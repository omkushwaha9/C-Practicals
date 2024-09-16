#include <stdio.h>
#include <stdlib.h>

void Push(int *tos, int *stack, int arr_size);
void Pop(int *tos);
void Peep(int *tos, int *stack);
void Change(int *tos, int *stack);
void Display(int *tos, int *stack);
void IsEmpty(int *tos);
void IsFull(int *tos, int arr_size);

int main()
{
    int ArrSize = 5;
    int *Stack = (int *)malloc(ArrSize * sizeof(int)), *TOS = malloc(sizeof(int)), *Input = malloc(sizeof(int));
    *TOS = -1;

    printf("welcome\n");
    do
    {
        printf(" 1 : push \n 2 : pop \n 3 : peep \n 4 : change \n 5 : display \n 6 : IsEmpty \n 7 : IsFull \n 0 : Exit \n");
        printf("Enter the number which task you want to perform:\n");
        scanf("%d", Input);

        switch (*Input)
        {
        case 1:
            Push(TOS, Stack, ArrSize);
            break;

        case 2:
            Pop(TOS);
            break;

        case 3:
            Peep(TOS, Stack);
            break;

        case 4:
            Change(TOS, Stack);
            break;

        case 5:
            Display(TOS, Stack);
            break;

        case 6:
            IsEmpty(TOS);
            break;

        case 7:
            IsFull(TOS, ArrSize);
            break;

        case 0:
            printf("Sucessfully Exited :)");
            break;

        default:
            printf("Invalid input! try again\n");
            break;
        }
    } while (*Input != 0);

    free(Stack);
    free(Input);
    free(TOS);
    return 0;
}

void Push(int *tos, int *stack, int arr_size)
{
    int val;
    if (*tos == arr_size - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter value to push in stack\n");
        scanf("%d", (stack + (*tos + 1)));
        *tos += 1;
        printf("Succesfully pushed the value\n");
    }
}

void Display(int *tos, int *stack)
{
    if (*tos == -1)
    {
        printf("Stack underflow\n");
        printf("Please push some values in stack first\n");
    }
    else
    {
        printf("Here is Your Stack\n");
        for (int i = *tos; i >= 0; i--)
        {
            printf("-------\n");
            printf("  %d  \n", *(stack + i));
        }
        printf("-------\n");
    }
}

void IsEmpty(int *tos)
{
    if (*tos == -1)
    {
        printf("The Stack is empty\n");
    }
    else
    {
        printf("The Stack is not empty\n");
    }
}

void IsFull(int *tos, int arr_size)
{
    if (*tos == arr_size - 1)
    {
        printf("The Stack is full\n");
    }
    else
    {
        printf("The Stack is not full\n");
    }
}

void Pop(int *tos)
{
    if (*tos == -1)
    {
        printf("The Stack is empty element can't be popped\n");
    }
    else
    {
        *tos -= 1;
        printf("Succesfully popped element from stack\n");
    }
}

void Peep(int *tos, int *stack)
{
    int val = 0;
    printf("which element you want to find from top of the stack\n");
    scanf("%d", &val);
    if ((*tos - val + 1) == -1)
    {
        printf("There is no element to show in stack at this position\n");
    }
    else
    {
        printf("Your Element is \n");
        printf("-------\n");
        printf("  %d  \n", *(stack + (*tos - val + 1)));
        printf("-------\n");
    }
}

void Change(int *tos, int *stack)
{
    int val = 0, input;
    if (*tos == -1)
    {
        printf("Stack underflow! Please enter elements first\n");
    }
    else
    {
        printf("which element you want to change from top of the stack\n");
        scanf("%d", &val);
        if ((*tos - val + 1) == -1)
        {
            printf("There is no element to change in stack at this position\n");
        }
        else
        {
            printf("Enter the new value\n");
            scanf("%d", &input);
            *(stack + (*tos - val + 1)) = input;
            printf("Sucessfully replaced the value \n");
        }
    }
}