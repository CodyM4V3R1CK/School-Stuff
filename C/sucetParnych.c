#include <stdio.h>

int main(){

    int x, y, a;

    y = 0;
    a = 0;
    x = 1;

    while(x != 0){

        printf("zadaj cislo\n");
        scanf("%d", &x);

        a=x%2;
        if(a == 0){
            y+=x;
        }
    } 

    printf("%d", y);

    return 0;
}