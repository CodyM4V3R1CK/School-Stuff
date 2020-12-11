#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //read from text file and save into hexNumbers
    char hexNumber[1000];
    FILE *hex;
    if ((hex = fopen("intelHEX.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(hex, "%[^\t]", hexNumber);
    printf("Data from the file:\n%s", hexNumber);
    printf("\n------------------------------\n");
    fclose(hex);

// int tmp = 0;
// while (tmp < 1000){
//     printf("%c", hexNumber[tmp]);
//     tmp++;
// }

    // make an array that contains all 3 numbers

    int hexCode[100][3];


    return 0;
}