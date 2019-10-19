#include <stdio.h>

int main(){

    int a, s, e;

    scanf("%d %d %d", &a, &s, &e);

    if( s > e){
        int tmp = s;
        s = e;
        e = tmp;
    }

    while(s <= e){
        printf("%d\n", a * s);
        s++;
    }


    return 0;
}