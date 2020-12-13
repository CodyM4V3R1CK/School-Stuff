#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int najvacsie(int pole[], int rozmer);

int main(){
    int n, i, m;

    printf("zadaj rozmer pola \n");
    scanf("%d",&n);

    int a[n];

    srand(time(0));

    for (i=0; i<n; i++){
        a[i]=rand()%51;
        printf("%d ",a[i]);
    
    }
    m = najvacsie(a, n);

    printf("\nnajvacsie cislo je %d a je na pozici %d",a[m],m+1);

    return 0;
}

int najvacsie(int pole[], int rozmer){
    int i, max=0, poz;

    for (i=0;i<rozmer;i++)
        if(pole[i]>max){
            max=pole[i];
            poz = i;
        }

    return poz;
}

