#include <stdio.h>

int main(){

    int x, y, a, b, c;

    y = 0;
    a = 0;
    b = 0;
    c = 0;
    x = 1;

    while(x != 0){

        printf("zadaj cislo\n");
        scanf("%d", &x);

        a=x%2;
        if(a == 0){
            y+=x;
        }
        if( a == 1){
            b+=x;
        }
        c+=x;
    } 

    printf("sucet vsetkych parnych je %d\n", y);
    printf("sucet vsetkych neparnych je %d\n", b);
    printf("sucet vsetkych cisel je %d\n", c);


    return 0;
}