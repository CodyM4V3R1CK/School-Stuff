#include <stdio.h>
#include <string.h>

int main (void){

    FILE *hex;
    char hexNumber[150];

    hex = fopen("intelHEX.txt", "r");

    if (hex == NULL){
        printf("ERROR, couldn't open the file");
    }else{
        printf("The file is now oppened. \n");
        while(fgets(hexNumber, 150, hex) != NULL){
            printf("%d", hex);
        }
        fclose(hex);
    }

    return 0;
}