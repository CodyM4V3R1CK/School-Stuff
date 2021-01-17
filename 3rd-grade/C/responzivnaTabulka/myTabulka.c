#include <stdio.h>

typedef struct zaznam{
    char meno[30];
    int vyska;
    int rokNarodenia;
    int tel;
} Zaznam;

int main (void){

    Zaznam clovek[1];

    printf("zadaj meno: ");
    scanf("%[^\n]", &clovek[1].meno);

    printf("zadaj vysku: ");
    scanf("%d", &clovek[1].vyska);

    printf("zadaj rok narodenia: ");
    scanf("%d", &clovek[1].rokNarodenia);

    printf("zadaj telefonne cislo v tvare (xxxxxxxxxx bez medzier): ");
    scanf(" %d", &clovek[1].tel);

    printf("%s\n", clovek[1].meno);
    printf("%d\n", clovek[1].vyska);
    printf("%d\n", clovek[1].rokNarodenia);
    printf("%d\n", clovek[1].tel);

    return 0;
}