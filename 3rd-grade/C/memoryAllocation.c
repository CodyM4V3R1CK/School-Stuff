#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[30];
char *ptr_meno;

int main(){

    int i, k;

    for(i = 0; i < 3; i++){
        scanf("%s", &name);
        ptr_meno = (char *) malloc(strlen(name) * sizeof(char));
        if(ptr_meno == NULL){
            printf("Nemate dostatok pamate!\n");
        }

        for (k = 0; k < strlen(name); k++){
            ptr_meno[k] = name[k];
        }
        
        printf("%s\n", ptr_meno);

        // *ptr_meno = (char) name;

        // printf("%s\n", ptr_meno);
        
        free(ptr_meno);
    }
    return 0;
}