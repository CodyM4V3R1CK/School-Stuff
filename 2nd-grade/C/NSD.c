#include <stdio.h>

int main(){

    int a, b, nsd, i;

    printf("zadaj 2 cisla:\n");
    scanf("%d %d", &a, &b);

    i = 1;
    nsd = 0;

    while((i <= a) && (i <= b)){

        if((a%i == 0) && (b%i == 0)){
            nsd = i;
        }
        i++;
    }

    printf("NSD je %d", nsd);

    return 0;
}