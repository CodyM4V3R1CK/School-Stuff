#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <termio.h>
#include <unistd.h>
#include <fcntl.h>
//#include <conio.h>

int getch(void);
int kbhit(void);



int main() {
    int a = 0, b = 0, hadanyZnak = 0;
    struct timeval start, stop;

    srand(time(NULL));

    while(getch()!= 83){
        printf("F1 - Napoveda \t F2 - Start/Restart \t F4/ESC - Koniec\n"); //zatial 1 2 a 0
        a = getch();
//        printf("%d", a);
        if(a == 27){
            a = getch();
//            printf("%d", a);
            if(a == 79){
                a = getch();
//                printf("%d", a);
            }
        }
//        printf("%d\n", a);

// prve menu

        if (a == 80){ //49
            printf("Meranie bude spocivat v tom, ze program vygeneruje nahodny znak, zobrazi ho a spusti");
            printf("meranie casu. \nMeranie sa zastavi v okamihu, ked uzivatel stlaci rovnaku klavesu. \n");
            printf("k uzivatel stlaci nieco ine, program to ma ignorovat. \nNapokon program vypise zmerany cas,");
            printf("ktory uplynie od vypisania po stlacenie klavesy.\n");
        }else if(a == 83){ //48
            return 0;
        }else if(a == 81){ //50
            goto game;
        }

//menu po 1

        b = getch();
        game:
        if(b == 81){
            system("clear"); //clear terminal
            char randomLetter = (rand()%(122 - 97 + 1)) + 97; //ascii kod pismena
            char hadaneZnaky[30];
            int pocetPokusov = 0;
            printf("%c\n", randomLetter);

//  hadame znak a zistujeme cas
            gettimeofday(&start, NULL);
            do {
                hadanyZnak = getch();
                if(hadanyZnak == 83){
                    return 0;
                }
                hadaneZnaky[pocetPokusov] = hadanyZnak;
                pocetPokusov++;
            }while (hadanyZnak != randomLetter);
            gettimeofday(&stop, NULL);
            double time;
            time = (stop.tv_sec - start.tv_sec) * 1000;
            time += (stop.tv_usec - start.tv_usec) / 1000.0;
            time /= 1000;
//  vyherne hlasky
            if(pocetPokusov == 1){
                if(time <= 1){
                    printf("\33[0;32m"); //green
                    printf("cas bol: %.2f\n", time);
                    printf("\33[0m");
                    printf("stlacili ste: %c", hadanyZnak);
                }else if(time > 1 && time <= 1.5){
                    printf("\33[0;36m"); //cyan
                    printf("cas bol: %.2f\n", time);
                    printf("\33[0m");
                    printf("stlacili ste: %c", hadanyZnak);
                }else if(time > 1.5){
                    printf("\33[0;31m"); //red
                    printf("cas bol: %.2f\n", time);
                    printf("\33[0m");
                    printf("stlacili ste: %c", hadanyZnak);
                }
            }else if(pocetPokusov >= 1){
                if(time <= 1){
                    printf("\33[0;32m");
                    printf("cas bol: %.2f\n", time);
                    printf("\33[0m");
                    printf("Postupne ste stlacali: ");
                    int i = 0;
                    while(i < pocetPokusov){
                        printf("%c ", hadaneZnaky[i]);
                        i++;
                    }
                }else if(time > 1 && time <= 1.5){
                    printf("\33[0;36m");
                    printf("cas bol: %.2f\n", time);
                    printf("\33[0m");
                    printf("Postupne ste stlacali: ");
                    int i = 0;
                    while(i < pocetPokusov){
                        printf("%c ", hadaneZnaky[i]);
                        i++;
                    }
                }else if(time > 1.5){
                    printf("\33[0;31m");
                    printf("cas bol: %.2f\n", time);
                    printf("\33[0m");
                    printf("Postupne ste stlacali: ");
                    int i = 0;
                    while(i < pocetPokusov){
                        printf("%c ", hadaneZnaky[i]);
                        i++;
                    }
                }
            }
        }else if(b == 83){
            return 0;
        }
        printf("\n");
    }
}

int kbhit(void){
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF){
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

int getch(void){
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}