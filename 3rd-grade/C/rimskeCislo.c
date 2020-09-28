#include <stdio.h>;

int main(void){

    int number;
    float inputNum;

    printf("zadaj cislo od 0-1000:\n");
    scanf("%f", &inputNum);

    number = (int)inputNum;

    if(number != inputNum){
        printf("desatinne cisla nie");
        return 0;
    }else if(number < 0 || number > 1000){
        printf("wrong number");
        return 0;
    }else if(number == 0){
        printf("0");
        return 0;
    }

    while(number != 0){
        if(number >= 1000){
            printf("M");
            number-=1000;
        }else if(number >= 900){
            printf("CM");
            number-=900;
        }else if(number >= 800){
            printf("DCCC");
            number-=800;
        }else if(number >= 700){
            printf("DCC");
            number-=700;
        }else if(number >= 600){
            printf("DC");
            number-=600;
        }else if(number >=500){
            printf("D");
            number-=500;
        }else if(number >=400){
            printf("CD");
            number-=400;
        }else if(number >=300){
            printf("CCC");
            number-=300;
        }else if(number >=200){
            printf("CC");
            number-=200;
        }else if(number >=100){
            printf("C");
            number-=100;
        }else if(number >=90){
            printf("XC");
            number-=90;
        }else if(number >=80){
            printf("LXXX");
            number-=80;
        }else if(number >=70){
            printf("LXX");
            number-=70;
        }else if(number >=60){
            printf("LX");
            number-=60;
        }else if(number >=50){
            printf("L");
            number-=50;
        }else if(number >=40){
            printf("XL");
            number-=40;
        }else if(number >=30){
            printf("XXX");
            number-=30;
        }else if(number >=20){
            printf("XX");
            number-=20;
        }else if(number >=10){
            printf("X");
            number-=10;
        }else if(number >=9){
            printf("IX");
            number-=9;
        }else if(number >=8){
            printf("VIII");
            number-=8;
        }else if(number >=7){
            printf("VII");
            number-=7;
        }else if(number >=6){
            printf("VI");
            number-=6;
        }else if(number >=5){
            printf("V");
            number-=5;
        }else if(number >=4){
            printf("IV");
            number-=4;
        }else if(number >=3){
            printf("III");
            number-=3;
        }else if(number >=2){
            printf("II");
            number-=2;
        }else if(number >=1){
            printf("I");
            number-=1;
        }
    }
    return 0;
}