#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char hexNumber[1000];
    FILE *hex;
    if ((hex = fopen("intelHEX.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(hex, "%[^\n]", hexNumber);
    printf("Data from the file:\n%s", hexNumber);
    fclose(hex);

    return 0;
}