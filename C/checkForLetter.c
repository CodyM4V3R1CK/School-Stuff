#include <stdio.h>
#include <string.h>

int main(){

    char words[20][10] = {"auto", "mobil", "motorka", "display", "tricko"}, search;
    int x = 0, y = 0, i = 0;

    scanf("%s", &search);
	
    while(y < 10){
        x = 0;
		i = strlen(words[y]);
        while(x < i){
            if(words[y][x] == search){
                printf("%s ", words[y]);
				break;
            }
            x++;
        }
        y++;
    }

    return 0;
}