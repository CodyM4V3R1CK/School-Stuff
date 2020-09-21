#include <stdio.h>

int main(){

    int a, i = 1, x;

    printf("zadaj cislo\n");
    scanf("%d", &a);

    while(i <= a){
        x = 1;
        while(x <= a){
            printf("#");
            x++;
        }
        printf("\n");
        i++;
    }


    return 0;
}