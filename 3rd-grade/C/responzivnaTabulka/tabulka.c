#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){

    int vyska, vek, longest;
    char meno[100], tel[30], rvek[100];

    printf("\n Zadajte vase meno, priezvisko: ");
    gets(meno);

    printf(" Zadajte vase telefonne cislo (**********): ");
    gets(tel);

    printf(" Zadajte vasu vysku: ");
    scanf("%s", &vyska);

    printf(" Zadajte rok narodneia (rok musi byt 1 - 3000): ");
    scanf("%d", &vek);

    

    if(vek > 3000 || vek <= 0){
        system("clear");
        printf("ZLY ROK DILINO c:");
        return 0;
    }

    while(vek != 0){
        if(vek == 3000){
            char r[10] = "MMM";
            vek = vek - 3000;
            strncat(rvek, &r, 3);
        }else if(vek >= 2000){
            char r[10] = "MM";
            vek = vek - 2000;
            strncat(rvek, &r, 2);
        }else if(vek >= 1000){
            char r[10] = "M";
             vek = vek - 1000;
             strncat(rvek, &r, 1);
        }else if(vek >= 900 && vek < 1000){
            char r[10] = "CM";
            vek = vek - 900;
            strncat(rvek, &r, 2);
        }else if(vek >= 500 && vek < 900){
           char r[10] = "D";
            vek = vek - 500;
            strncat(rvek, &r, 1);
        }else if(vek >= 400 && vek < 500){
            char r[10] = "CD";
            vek = vek - 400;
            strncat(rvek, &r, 2);
        }else if(vek >= 300 && vek < 400){
            char r[10] = "CCC";
            vek = vek - 300;
            strncat(rvek, &r, 3);
        }else if(vek >= 200 && vek < 300){
            char r[10] = "CC";
            vek = vek - 200;
            strncat(rvek, &r, 2);
        }else if(vek >= 100 && vek < 200){
            char r[10] = "C";
            vek = vek - 100;
            strncat(rvek, &r, 1);
        }else if(vek >= 90 && vek < 100){
            char r[10] = "XC";
            vek = vek - 90;
            strncat(rvek, &r, 2);
        }else if(vek >= 50 && vek < 90){
            char r[10] = "L";
            vek = vek - 50;
            strncat(rvek, &r, 1);
        }else if(vek >= 40 && vek < 50){
            char r[10] = "XL";
            vek = vek - 40;
            strncat(rvek, &r, 2);
        }else if(vek >= 30 && vek < 40){
            char r[10] = "XXX";
            vek = vek - 30;
            strncat(rvek, &r, 3);
        }else if(vek >= 20 && vek < 30){
            char r[10] = "XX";
            vek = vek - 20;
             strncat(rvek, &r, 2);
        }else if(vek >= 10 && vek < 20){
            char r[10] = "X";
            vek = vek - 10;
            strncat(rvek, &r, 1);
        }else if(vek >= 10 && vek < 40){
            char r[10] = "X";
            vek = vek - 10;
            strncat(rvek, &r, 1);
        }else if(vek == 9 ){
            char r[10] = "IX";
            vek = vek - 9;
            strncat(rvek, &r, 2);
        }else if(vek >= 5 && vek < 9){
            char r[10] = "V";
            vek = vek - 5;
            strncat(rvek, &r, 1);
        }else if(vek == 4){
            char r[10] = "IV";
            vek = vek - 4;
            strncat(rvek, &r, 2);
        }else if(vek == 3){
            char r[10] = "III";
            vek = vek - 3;
            strncat(rvek, &r, 3);
        }else if(vek == 2){
            char r[10] = "II";
            vek = vek - 2;
            strncat(rvek, &r, 2);
        }else if(vek == 1){
        char r[10] = "I";
        vek = vek - 1;
        strncat(rvek, &r, 1);
    }
}
    printf("\n  %s", rvek);

    return 0;
}