#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){

    int i = 0, vek, longest = 0, pzMax, pzMeno = 0, pzTel = 0, pzVyska = 0, pzRvek = 0;
    char meno[100], tel[30], rvek[100] = "", vyska[5];

    printf("\n Zadajte vase meno: ");
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

    // while(meno[i] != "\n"){
    //     if(meno[i]!=' '){
    //         pzMeno++;
    //     }else if(meno[i]==' ' || meno[i] != '\n' || meno[i] != '\t'){
    //         pzMeno++;
    //     }
    //     i++;
    // }
    // printf("%d", pzMeno);
    // i = 0;

    // while(tel[i] != "\n"){
    //     if(tel[i]!=' '){
    //         pzTel++;
    //     }else if(tel[i]==' ' || tel[i] != '\n' || tel[i] != '\t'){
    //         pzTel++;
    //     }
    //     i++;
    // }

    // i = 0;

    // while(vyska[i] != "\n"){
    //     if(vyska[i]!=' '){
    //         pzVyska++;
    //     }else if(vyska[i]==' ' || vyska[i] != '\n' || vyska[i] != '\t'){
    //         pzVyska++;
    //     }
    //     i++;
    // }

    // i = 0;
    
    // while(rvek[i] != "\n"){
    //     if(rvek[i]!=' '){
    //         pzRvek++;
    //     }else if(rvek[i]==' ' || rvek[i] != '\n' || rvek[i] != '\t'){
    //         pzRvek++;
    //     }
    //     i++;
    // }

    if(pzMeno > pzTel && pzMeno > pzVyska && pzMeno > pzRvek){
        pzMax = pzMeno;
    }else if(pzTel > pzVyska && pzTel > pzRvek){
        pzMax = pzTel;
    }else if(pzVyska > pzRvek){
        pzMax = pzVyska;
    }else{
        pzMax = pzRvek;
    }

///////////////////Tabulka///////////////////

system("clear");
i=0;
                            while (i!=4){ //
                                printf("-");
                                ++i;
                            }
                            i=0;
                            printf(" Matej Holarek ");
                            while (i!= pzMax){
                                printf("-");
                                ++i;
                            }
                            i=0;
                            ////
                            printf("\n|");
                            while(i!=18+pzMax){
                                printf(" ");
                                ++i;
                            }
                            i=0;
                            printf("|\n");
                            ////
                            printf("|");
                            while(i!=18+pzMax){
                                printf("-");
                                ++i;
                            }
                            printf("|");
                            i=0;

////////// riadok meno /////////
        printf("\n|               |  ");
        while(i!=pzMax){
            printf(" ");
            ++i;
        }
        i=0;
        printf("|");

        printf("\n| Meno          | ");
        while(i!=pzMeno){
            printf(" ");
            ++i;
        }
        i=0;
        printf("%s |", meno);

        printf("\n|               |  ");
        while(i!=pzMax){
            printf(" ");
            ++i;
        }
        i=0;
        printf("|\n");
/////////////////////////////////////////////////////

                            printf("|");
                            while(i!=18+pzMax){
                                printf("-");
                                ++i;
                            }
                            i=0;
                            printf("|");

///////// riadok vyska ///////////
        printf("\n|               |  ");
        while(i!=pzMax){
            printf(" ");
            ++i;
        }
        i=0;
        printf("|");

        printf("\n| Vyska         | ");
        while(i!=pzVyska){
            printf(" ");
            ++i;
        }
        i=0;
        printf("%s |", vyska);

        printf("\n|               |  ");
        while(i!=pzMax){
            printf(" ");
            ++i;
        }
        i=0;
        printf("|\n");
/////////////////////////////////////////////////////

                            printf("|");
                            while(i!=18+pzMax){
                                printf("-");
                                ++i;
                            }
                            i=0;
                            printf("|");

/////////// riadok rok////////
        printf("\n|               |  ");
        while(i!=pzMax){
            printf(" ");
            ++i;
        }
        i=0;
        printf("|");

        printf("\n| Rok narodenia | ");
        while(i!=pzRvek){
            printf(" ");
            ++i;
        }
        i=0;
        printf("%s |", rvek);

        printf("\n|               |  ");
        while(i!=pzMax){
            printf(" ");
            ++i;
        }
        i=0;
        printf("|\n");
/////////////////////////////////////////////////////

                            printf("|");
                            while(i!=18+pzMax){
                                printf("-");
                                ++i;
                            }
                            i=0;
                            printf("|");

///////// riadok tel.///////////
        printf("\n|               |  ");
        while(i!=pzMax){
            printf(" ");
            ++i;
        }
        i=0;
        printf("|");

        printf("\n| Tel.          | ");
        while(i!=pzTel){
            printf(" ");
            ++i;
        }
        i=0;
        printf("%s |", tel);

        printf("\n|               |  ");
        while(i!=pzMax){
            printf(" ");
            ++i;
        }
        i=0;
        printf("|\n");
/////////////////////////////////////////////////////

                            while(i!=20+pzMax){
                                printf("-");
                                ++i;
                            }
                            i=0;

/////////////////////////////////////////////////////

    return 0;
}