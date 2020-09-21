//WIP

#include <stdio.h>

int main(){

    int a, b, c, d, max, min;

    max = 0;
    min = 999999999;
    a = 1;
    b = 0;
    c = 0;
    d = 0;

    while(a !=0 ){
        printf("zadaj cislo\n");
        scanf("%d", &a);
            if(a != 0){
                if(a > max){
                    max = a;
                    b = max - c;
                }if(a < min){
                    min = a;
                    b = min + d;
                }
            }
        c = max;
        d = min;
    }

    printf("2nd biggest number is %d\n", max - b);
    printf("2nd smallest number is %d\n", min + d);


    return 0;
}