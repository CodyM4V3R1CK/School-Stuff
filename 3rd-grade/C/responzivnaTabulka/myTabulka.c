#include <stdio.h>

typedef struct zaznam{
    char meno[30];
    int vyska;
    int rokNarodenia;
    int tel;
} Zaznam;

void decimal2roman(int num);

int main (void){

    Zaznam clovek[1];

    printf("zadaj meno: ");
    scanf("%[^\n]", &clovek[1].meno);

    printf("zadaj vysku: ");
    scanf("%d", &clovek[1].vyska);

    printf("zadaj rok narodenia: ");
    scanf("%d", &clovek[1].rokNarodenia);

    printf("zadaj telefonne cislo v tvare (xxxxxxxxxx bez medzier): ");
    scanf(" %d", &clovek[1].tel);

    // decimal2roman(clovek[1].rokNarodenia);

    return 0;
}

void decimal2roman(int num){
    int decimal[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1}; //base values
    char *symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};  //roman symbols
    int i = 0;
 
    while(num){ //repeat process until num is not 0
        while(num/decimal[i]){  //first base value that divides num is largest base value
            printf("%s",symbol[i]);    //print roman symbol equivalent to largest base value
            num -= decimal[i];  //subtract largest base value from num
        }
        i++;    //move to next base value to divide num
    }
}