#include <stdio.h>

typedef struct car{
    char znacka[30];
    char model[30];
    int rokVyroby;
} Car;

int main(){

    Car auta[6] = {{"Skoda", "octavia", 2005}, {"BMW", "E39", 1992}, {"Suzuki", "SX4", 2008}, {"Mercedes", "S-class", 2021}, {"Audi", "SQ4", 2006}, {"Audi", "Quattro", 1982}};

    int i = 0;

    while(i < 3){
        printf("znacka: %s  model: %s   rok vyroby: %d\n", auta[i].znacka, auta[i].model, auta[i].rokVyroby);
        i++;
    }

    return 0;
}