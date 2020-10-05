#include <stdio.h>;

int main(void){

    int primeCount, i = 0, isPrime = 1, divider = 2, number = 2;

    printf("Zadaj prvych n prvocisel (max 20)\n");
    scanf("%d", &primeCount);

    if(primeCount > 20){
        printf("Zadal si moc velke cislo BAKA");
        return 0;
    }

    while(i < primeCount){

        isPrime = 1;
        divider = 2;
        while(divider < number){
            if(number%divider == 0){
                isPrime = 0;
            }
            divider++;
        }
        if(isPrime == 1){
            printf("%d\n", number);
            i++;
        }
        number++;
    }

    return 0;
}