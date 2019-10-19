#include <stdio.h>

int main(){

    int a, b, c, i, x;

    printf("a b c\n");
    scanf("%d %d %d", &a, &b, &c);

    i = 1;

    if(c < 0){
        while(i > c+1){
            x = a - b;
            printf("%d\n", x);
            a = b;
            b = x;
            i--;
        }
    }else{
        while(i <= c){
            x = a + b;
            printf("%d\n", x);
            a = b;
            b = x;
            i++;
        }
    }

    return 0;
}