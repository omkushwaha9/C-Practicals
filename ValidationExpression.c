#include <stdio.h>
#include <string.h>
int top = -1;
char stack[100];
void push(char);
void pop();
void final();
void main()
{
int i;
char a[100];
printf("OM KUSHWAHA T24012022011\n");
printf("Enter your expression\n");
gets(a);
for (i = 0; a[i] != '\0'; i++)
{
if (a[i] == '(')
{
push(a[i]);
}
else if (a[i] == ')')
{
pop();
}
}
final();
}
void push(char a)
{
stack[top] = a;
top++;
}
void pop()
{
if (top == -1)
{
printf("expression is invalid\n");
}
else
{
top--;
}
}
void final()
{
if (top == -1)
{
printf("expression is valid");
}
else
{
printf("expression is invalid");
}
}