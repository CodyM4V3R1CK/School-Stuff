#include <stdio.h>

int main(){

    int a, i = 1;

    printf("zadaj cislo\n");
    scanf("%d", &a);

    while(i <= a){
        printf("#");
        i++;
    }

    return 0;
}