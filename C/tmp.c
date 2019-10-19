#include <stdio.h>

int main(){

    int a, min;

    min = 0;
    a = 1;

    while(a !=0 ){
        printf("zadaj cislo\n");
        scanf("%d", &a);
            if(a < min){
                min = a;
            }
    }    
    printf("smallest number is %d", min);


    return 0;
}