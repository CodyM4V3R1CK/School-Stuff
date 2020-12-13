#include <stdio.h>
#include<time.h>

void vypis(int cisla[], int lenght);
int pocet_zapornych(int cisla[], int lenght);

int main(void){

    int n, i = 0, negCount, posSum;

    printf("Zadaj rozmer pola: ");
    scanf("%d", &n);

    int cisla[n];

    srand(time(0));

    while(i < n){
        cisla[i] = rand()%21 - 10;
        i++;
    }

    vypis(cisla, n);
    negCount = pocet_zapornych(cisla, n);

    printf("\n");
    printf("pocet zapornych je: %d\n", negCount);

    posSum = sucet_kladnych(cisla, n);

    printf("sucet kladnych je: %d\n", posSum);

    return 0;
}

void vypis(int cisla[], int lenght){
    int i = 0;
    while(i < lenght){
        printf("%d ", cisla[i]);
        i++;
    }
}

int pocet_zapornych(int cisla[], int lenght){
    int negCount = 0, i = 0;
    while(i < lenght){
        if (cisla[i] < 0){
            negCount++;
        }
        i++;
    }

    return negCount;
}

int sucet_kladnych(int cisla[], int lenght){
    int posSum = 0, i = 0;
    while(i < lenght){
        if (cisla[i] > 0){
            posSum+= cisla[i];
        }
        i++;
    }

    return posSum;
}