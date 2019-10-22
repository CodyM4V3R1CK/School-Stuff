#include <stdio.h>

int main(){

    int a, b, i = 1, x;

    printf("zadaj rozmery\n");
    scanf("%d %d", &a, &b);

    while(i <= b){
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