#include <stdio.h>

int main(){

    int a, x, n, e;

    printf("akym cislom sa ma cyklus koncit?\n");
    scanf("%d", &e);

    x = 0;
    n = 0;
    a = 1;
    while(a != e){
        printf("zadaj cislo\n");
        scanf("%d", &a);
        x = x + a;
        n++;
    }

    x = x / (n-1);

    printf("toto je vysledok %d", x);

    return 0;
}