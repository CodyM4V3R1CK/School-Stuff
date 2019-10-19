#include <stdio.h>

int main(){

    int a, b, c, x;

    printf("a b c\n");
    scanf("%d %d %d", &a, &b, &c);

     x = 0;
     while (a <= b){
         x = x + a;
         a+=c;
     }

     printf("%d", x);

    return 0;
}