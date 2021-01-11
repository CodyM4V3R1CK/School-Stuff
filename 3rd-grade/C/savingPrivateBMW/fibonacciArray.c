#include <stdio.h>

int main(void){

    printf("zadaj dlzku pola(viac ako 0):\n");
    int n;
    scanf("%d", &n);

    if(n <= 0){
        printf("ZADAJ KLADNE CISLO!!!");
        return 0;
    }

    int numbers[n], i = 2;

    numbers[0] = 1;
    numbers[1] = 1;

    while(i < n){
        numbers[i] = numbers[i-1] + numbers[i-2];
        i++;
    }

    i = 0;

    while(i < n){
        printf("%d ", numbers[i]);
        i++;
    }

    return 0;
}