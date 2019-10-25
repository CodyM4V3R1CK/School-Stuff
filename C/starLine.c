#include <stdio.h>

int main(){

    int a, i, aa, c;

    printf("zadaj cislo:\n");
    scanf("%d", &a);

    aa = a;

    while(a >= 1){
        i = a;
        while(i >= 1){
            printf("*");
            i--;
        }
        printf("\n");
        a--;
    }

    if(a == 0){
        a=2;
        while(a <= aa){
            c = a;
            while(c <= aa){
                printf("*");
                c++;
            }
            printf("\n");
            a++;
        }
    }

    return 0;
}