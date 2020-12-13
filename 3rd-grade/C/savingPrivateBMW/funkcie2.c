#include <stdio.h>

int maximum (aaa, bbb, ccc);
int pocitaj (max);

int main (void){

    int a, b, c, max;
    float aa, bb, cc;
    printf("zadaj 3 cele kladne cisla(cislo cislo cislo):\n");
    scanf("%f %f %f", &aa, &bb, &cc);

    a = (int)aa;
    b = (int)bb;
    c = (int)cc;

    if(a < 0 || b < 0 || c < 0){
        printf("Jedno z tvojich cisel je zaporne");
        return ;
    }else if(a != aa || b != bb || c != cc){
        printf("Desatinne cisla nie");
        return 0;
    }
    max = maximum(a, b, c);

    printf("najvacsie cislo je: %d\n", max);

    pocitaj(max);

    return 0;
}

int maximum (aaa, bbb, ccc){
    int max;
    if(aaa > bbb && aaa > ccc){
        max = aaa;
    }else if(bbb > aaa && bbb > ccc){
        max = bbb;
    }else{
        max = ccc;
    }
    return max;
}

int pocitaj (max){
    int i = 0;
    while(i <= max){
        printf("%d ", i);
        i++;
    }
}