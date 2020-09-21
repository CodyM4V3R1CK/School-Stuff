#include <stdio.h>

int main(){

    int a, b, x;

    printf("a b\n");
    scanf("%d %d", &a, &b);

     x = 0;
     while (a <= b){
         x = x + a;
         a++;
     }

     printf("%d", x);

    return 0;
}