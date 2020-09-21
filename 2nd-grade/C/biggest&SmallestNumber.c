#include <stdio.h>

int main(){

    int a, max, min;

    max = 0;
    min = 999999999;
    a = 1;

    while(a !=0 ){
        printf("zadaj cislo\n");
        scanf("%d", &a);
            if(a != 0){
                if(a > max){
                    max = a;
                }if(a < min){
                    min = a;
                }
            }
    }

    printf("biggest number is %d\n", max);
    printf("smallest number is %d", min);


    return 0;
}