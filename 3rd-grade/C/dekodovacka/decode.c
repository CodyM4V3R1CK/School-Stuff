#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    FILE *hex;
    if ((hex = fopen("intelHEX.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(hex, "%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(hex);

    return 0;
}