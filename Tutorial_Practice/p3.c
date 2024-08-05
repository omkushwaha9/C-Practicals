// Avg using Array
#include <stdio.h>
int main(){
    int ages[] = {19,20,18,31,5,40,44,48,52};

    float avg,sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);
    for (i =0; i < length;  i++){
        sum += ages[i];
    }
    avg = sum / length;
    printf("The Average Age is : %.2f", avg);
    return 0;
}