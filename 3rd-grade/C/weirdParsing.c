#include <stdio.h>

int main(){

    char input[8];

    printf("zadaj nieco:");
    gets(input);

    printf("%s", input);

    return 0;
}