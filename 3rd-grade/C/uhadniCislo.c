#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;

int main(void){

    int x, tries = 0;
    time_t t;
    srand((unsigned) time(&t));
    int num = rand() % 201;

    printf("Zadaj Cislo: ");

    while(x != num){
        scanf("%d", &x);
        if(!x){
            printf("\nNezadal si cislo! REEEEEEEEEE");
            break;
        }
        tries++;
        if(x == num){
            printf("\nUhadol si na %d. pokus! c:", tries);
            break;
        }else if(x > num){
            printf("\nZadaj mensie cislo\n");
        }else if(x < num){
            printf("\nZadaj vacsie cislo\n");
        }
    }

    return 0;
}