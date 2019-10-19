#include <stdio.h>

int main(){

    int x, i, a;

    printf("zadaj cislo\n");
    scanf("%d", &x);
	i = 2;
    while(i <= x/2){
        if(x%i == 0){
            a = 1;
            break;
        }

        i++;
    }

    if(x == 1){
        printf("1 neni prvocislo ani delitelne");
    }if(a == 1){
        printf("%d nie je prvocislo", x);
    }if(a != 0){
        printf("%d je prvocislo", x);
    }

    return 0;
}