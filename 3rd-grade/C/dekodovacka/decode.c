#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //read from text file and save into hexNumbers
    char hexNumber[150];
    FILE *hex;
    if ((hex = fopen("intelHEX.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(hex, "%[^\t]", hexNumber);
    printf("Data from the file:\n%s", hexNumber);
    printf("\n------------------------------\n");
    fclose(hex);

int tmp = 0;
while (tmp < 150){
    printf("%c", hexNumber[tmp]);
    tmp++;
}

    // make an array that contains all 3 numbers

    // char hexCode[3][100];
    // int a, b = 0, c = 0;
    // while(b < 3){
    //     a = 0;
    //     while(a < 100){
    //         // printf("%c", hexNumber[c]);
    //         if(hexNumber[c] == ":"){
    //             a++;
    //             c++;
    //             printf("here");
    //         }else if(hexNumber[c] == "\t"){
    //             break;
    //         }
    //         hexCode[b][a] == hexNumber[c];
    //         printf("%c", hexCode[b][a]);
    //         c++;
    //         a++;
    //     }
    //     b++;
    // }

    return 0;
}