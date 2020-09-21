#include <stdio.h>

int main(){

    int x, y, a;

    printf("y a\n");\
    scanf("%d %d", &y, &a);

    x = y;
    int i=1;
    while (i < a){
        x = y * x;
        i++;
    }

    printf("%d", x);

    return 0;
}