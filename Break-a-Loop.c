#include<stdio.h>
int main(){
    int i;
    for ( i = 0; i < 10; i++){
        if ( i == 40 )
        {
          break;
        }
        printf("%d\n",i);
    }
    return 0;
}