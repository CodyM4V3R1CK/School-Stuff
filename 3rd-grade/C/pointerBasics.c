#include <stdio.h>;

int a = 5;

int *p_cislo = &a;

int main(void){

    printf("Adresa a = %d\n", &a); //adresa v pamati
    printf("&p_cislo = %d\n", &p_cislo); 
    printf("*p_cislo = %d\n", *p_cislo *= 5); //hodnota na adrese na ktoru ukazuje
    printf("p_cislo = %d\n", p_cislo); //ulozena hodnota v pointeri

    printf("a = %d\n", a);

    return 0;
}