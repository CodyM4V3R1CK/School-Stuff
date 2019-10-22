#include <stdio.h>

int main(){

    int a, b, i = 1, x, y, h;

    printf("zadaj rozmery\n");
    scanf("%d %d", &a, &b);

    while(i <= b){
        x = 1;
        if(i == 1 || i == b){
            while(x <= a){
                printf("#");
                x++;
            }
        }
		y = b - 1;
        if((i > 1) && (i <= y)){
        	printf("#");
			h = 1;
			while(h <= a - 2){
				printf(" ");
				h++;
			}
			printf("#");
        }
        printf("\n");
        i++;
    }

    return 0;
}