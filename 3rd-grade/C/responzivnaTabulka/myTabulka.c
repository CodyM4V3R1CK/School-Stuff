#include <stdio.h>

typedef struct zaznam{
    char meno[30];
    int vyska;
    int rokNarodenia;
    float Tel;
} Zaznam;

int main (void){

    Zaznam clovek[1];

    printf("zadaj meno: ");
    scanf("%s", &clovek[1].meno);

    printf("zadaj vysku: ");
    scanf("%d", &clovek[1].vyska);

    printf("zadaj rok narodenia: ");
    scanf("%d", &clovek[1].rokNarodenia);

    printf("zadaj telefonne cislo: ");
    scanf("%f", &clovek[1].Tel);

    return 0;
}