#include <stdio.h>;

int main(void){

    int number, rimskeCislo;

    printf("zadaj cislo od 0-9999:\n");
    scanf("%d", &number);

    if(number < 0 || number > 9999){
        printf("wrong number");
        return 0;
    }



    return 0;

}