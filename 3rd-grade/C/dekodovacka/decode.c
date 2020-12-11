#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char hexNumber[1000];
    FILE *hex;
    if ((hex = fopen("intelHEX.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(hex, "%s", hexNumber);
    printf("Data from the file:\n%s", hexNumber);
    fclose(hex);

    return 0;
}