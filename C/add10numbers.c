#include <stdio.h>

int main(){

    int a, x, i;

    i = 1;
    x = 0;
    while(i <= 10){
        printf("zadaj cislo\n");
        scanf("%d", &a);
        x = x + a;
        i++;
    }

    printf("toto je vysledok %d", x);

    return 0;
}