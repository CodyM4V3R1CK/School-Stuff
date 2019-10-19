#include <stdio.h>

int main(){

    int a, x;

    x = 0;
    while(a != 0){
        printf("zadaj cislo\n");
        scanf("%d", &a);
        x = x + a;
    }

    printf("toto je vysledok %d", x);

    return 0;
}