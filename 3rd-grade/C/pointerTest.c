#include <stdio.h>

void vypisPola(int *number, int width);
void bubbleSort(int *number, int width);

typedef struct {
    int vyska;
    float hmotnost;
}MIERY;


int main (void){
    int cisla[] = {100, -1, -35, 50, 77, -5, 22, 21, 23}, i = 0;
    int sirka = sizeof(cisla)/sizeof(int);

    vypisPola(cisla, sirka);
    printf("\n\n");

    bubbleSort(cisla, sirka);
    vypisPola(cisla, sirka);

    MIERY matej = {168, 90.2};

    MIERY *ptr;
    ptr = &matej;

    printf("\nmatej.vyska = %d\n", (*ptr).vyska);
    printf("matej.hmotnost = %.1f\n", ptr->hmotnost);

    return 0;
}

void vypisPola(int *number, int width){
    int i = 0;
    while(i < width){
        printf("%d, ", *(number + i));
        i++;
    }
}

void bubbleSort(int *number, int width){
    int tmp, i, j;

    for (i = 0; i < width - 1; i++){
        for (j = 0; j < width - 1 - i; j++){
            if(*(number + j) > *(number + j + 1)){
                tmp = *(number + j);
                *(number + j) = *(number + j + 1);
                *(number + j + 1) = tmp;
            }
        }
    }
}