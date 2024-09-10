#include <stdio.h>
void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10;
    int y = 20;
    printf("Before Swapping : X = %d, Y = %d\n", x, y);
    Swap(&x, &y);
    printf("After Swapping : X = %d, Y = %d\n", x, y);
    return 0;
}