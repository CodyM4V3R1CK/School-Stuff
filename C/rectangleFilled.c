#include <stdio.h>

int main(){

    int a, b, i = 1,x;

    printf("zadaj rozmery\n");
    scanf("%d %d", &a, &b);

    while(i <= a){
        x = 1;
        while(x <= b){
            printf("#");
            x++;
        }
        printf("\n");
        i++;
    }

    return 0;
}