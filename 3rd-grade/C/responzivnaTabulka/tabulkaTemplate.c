#include <stdio.h>

typedef struct miery{
    char meno[30];
    int roky;
    int vyska;
    float hmotnost;
} Miery;

int main() {

    int i;
    int pocet;

    FILE *fw;

    printf("Zadajte pocet zaznamov:");
    scanf("%d", &pocet);

    Miery ludia[pocet];

    for (i = 0; i < pocet; ++i) {
        printf("%d. zaznam\n", i + 1);
        printf("---------------------\n");

        printf("Meno: ");
        scanf("%s", &ludia[i].meno);

        printf("Pocet rokov: ");
        scanf("%d", &ludia[i].roky);

        printf("Vyska: ");
        scanf("%d", &ludia[i].vyska);

        printf("Hmotnost: ");
        scanf("%f", &ludia[i].hmotnost);

        printf("\n");
    }

    fw = fopen("databazaTemplate.txt", "w");

    fprintf(fw, "Pocet zaznamov:  %d\n\n", pocet);

    for (i = 0; i < pocet; ++i) {
        fprintf(fw, "%d. zaznam\n", i + 1);
        fprintf(fw, "---------------------------\n");
        fprintf(fw, "Meno:\t\t %s\n", ludia[i].meno);
        fprintf(fw, "Pocet rokov:\t %d\n", ludia[i].roky);
        fprintf(fw, "Vyska:\t\t %d cm\n", ludia[i].vyska);
        fprintf(fw, "Hmotnost:\t %.1f kg\n", ludia[i].hmotnost);
        fprintf(fw, "---------------------------\n");
        fprintf(fw, "\n");
    }

    printf("\nZapis dokonceny\n");

    fclose(fw);

    return 0;
}