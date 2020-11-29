#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <termio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int getch(void);
int kbhit(void);

int main() {
    int a = 0, b = 0, hadanyZnak = 0, nameLenght, ii;
    char playerName[20] = {"Player"};
    struct timeval start, stop;

    srand(time(NULL));

    start:

    system("clear");
    printf("F1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
    nameLenght = sizeof(playerName);

    if(!kbhit()){
        while(getch()!= 83){
            system("clear");
            printf("F1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
            a = getch();
            if(a == 27){
                a = getch();
                if(a == 79){
                    a = getch();
                }
            }

// prve menu
            printf("%d", a);

            if (a == 80){ //49
                system("clear");
                printf("Meranie bude spocivat v tom, ze program vygeneruje nahodny znak, zobrazi ho a spusti");
                printf("meranie casu. \nMeranie sa zastavi v okamihu, ked uzivatel stlaci rovnaku klavesu. \n");
                printf("k uzivatel stlaci nieco ine, program to ma ignorovat. \nNapokon program vypise zmerany cas,");
                printf("ktory uplynie od vypisania po stlacenie klavesy.\n");
                printf("F1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
            }else if(a == 83){ //48
                return 0;
            }else if(a == 81){ //50
                goto game;
            }else if(a == 82){
                system("clear");
                printf("Meno hraca je: ");
                ii = 0;
                while(ii < nameLenght){
                    printf("%c", playerName[ii]);
                    ii++;
                }
                printf("\nChcete zmenit meno? (y/n)");
                char nameChange;
                nameChange = getch();
                if(nameChange == 121){ //y
                    memset(playerName, 0, 20);
                    printf("\nZadajte nove meno(max 20 znakov, f3 na potvrdenie mena): ");
                    ii = 0;
                    int confirmation = 0;
                    while(confirmation != 82){
                        playerName[ii] = getch();
                        confirmation = playerName[ii];
                        ii++;
                    }
                    printf("\nZadali ste meno: ");
                    ii = 0;
                    nameLenght = sizeof(playerName);
                    nameLenght -= 3;
                    while(ii < nameLenght){
                        printf("%c", playerName[ii]);
                        ii++;
                    }
                    printf("\nJe toto spravne meno? (y/n)");
                    nameChange = getch();
                }else if(nameChange == 110){ //n
                    goto game;
                }
            }
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
                    printf("Meno hraca: ");
                    ii = 0;
                    nameLenght = sizeof(playerName);
                    while(ii <nameLenght){
                        printf("%c", playerName[ii]);
                        ii++;
                    }
                    printf("\nstlacili ste: %c\n", hadanyZnak);
                    printf("F1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
                }else if(time > 1 && time <= 1.5){
                    printf("\33[0;36m"); //cyan
                    printf("cas bol: %.2f\n", time);
                    printf("\33[0m");
                    printf("Meno hraca: ");
                    ii = 0;
                    nameLenght = sizeof(playerName);
                    while(ii <nameLenght){
                        printf("%c", playerName[ii]);
                        ii++;
                    }
                    printf("\nstlacili ste: %c\n", hadanyZnak);;
                    printf("F1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
                }else if(time > 1.5){
                    printf("\33[0;31m"); //red
                    printf("cas bol: %.2f\n", time);
                    printf("\33[0m");
                    printf("Meno hraca: ");
                    ii = 0;
                    nameLenght = sizeof(playerName);
                    while(ii <nameLenght){
                        printf("%c", playerName[ii]);
                        ii++;
                    }
                    printf("\nstlacili ste: %c\n", hadanyZnak);;
                    printf("F1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
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
                    printf("\nF1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
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
                    printf("\nF1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
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
                    printf("\nF1 - Napoveda \t F2 - Start/Restart \t F3 - Meno hraca\t F4 - Koniec\n");
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