#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
//#include <conio.h>

int main() {
    int a = 0, b = 0, hadanyZnak = 0;
    struct timeval start, stop;

    srand(time(NULL));

    while(a != 48){
        printf("F1 - Napoveda \t F2 - Start/Restart \t F10/ESC - Koniec\n"); //zatial 1 2 a 0
        scanf("%s", &a);
//        printf("%d\n", a);

// prve menu

        if (a == 49){
            printf("Meranie bude spocivat v tom, ze program vygeneruje nahodny znak, zobrazi ho a spusti");
            printf("meranie casu. \nMeranie sa zastavi v okamihu, ked uzivatel stlaci rovnaku klavesu. \n");
            printf("k uzivatel stlaci nieco ine, program to ma ignorovat. \nNapokon program vypise zmerany cas,");
            printf("ktory uplynie od vypisania po stlacenie klavesy.\n");
        }else if(a == 48){
            return 0;
        }else if(a == 50){
            goto game;
        }

//menu po 1

        scanf("%s", &b);
        game:
        if(b == 50){
            system("clear"); //clear terminal
            char randomLetter = (rand()%(122 - 97 + 1)) + 97; //ascii kod pismena
            char hadaneZnaky[30];
            int pocetPokusov = 0;
            printf("%c\n", randomLetter);

//  hadame znak a zistujeme cas
            gettimeofday(&start, NULL);
            do {
                scanf("%s", &hadanyZnak);
                if(hadanyZnak == 48){
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

        }else if(b == 48){
            return 0;
        }
        printf("\n");
    }
}

//    printf("F1 - Napoveda \t F2 - Start/Restart \t F10/ESC - Koniec\n"); //zatial 1 2 a 0
//    scanf("%s", &a);
//    printf("%d\n", a);
//
//// prve menu
//
//    if (a == 49){
//        printf("Meranie bude spocivat v tom, ze program vygeneruje nahodny znak, zobrazi ho a spusti meranie casu. Meranie sa zastavi v okamihu,"
//               "ked uzivatel stlaci rovnaku klavesu. Ak uzivatel stlaci nieco ine, program to ma ignorovat. Napokon program vypise zmerany cas, "
//               "ktory uplynie od vypisania po stlacenie klavesy.\n");
//    }else if(a == 48){
//        return 0;
//    }
//
////menu po 1
//
//    scanf("%s", &b);
//    if(b == 50){
////        system("clear"); //clear terminal
//        char randomLetter = (rand()%(122 - 97 + 1)) + 97; //ascii kod pismena
//        char hadaneZnaky[30];
//        int pocetPokusov = 0;
//        printf("%c\n", randomLetter);
//
////  hadame znak a zistujeme cas
//        t = clock();
//        do {
//            scanf("%s", &hadanyZnak);
//            if(hadanyZnak == 48){
//                return 0;
//            }
//            hadaneZnaky[pocetPokusov] = hadanyZnak;
//            pocetPokusov++;
//        }while (hadanyZnak != randomLetter);
//        t = clock() - t;
//        double time = ((double)t)/CLOCKS_PER_SEC; //sekundy
////  vyherne hlasky
//        if(pocetPokusov == 1){
//            if(time <= 1){
//                printf("\33[0;32m"); //green
//                printf("cas bol: %f\n", time);
//                printf("\33[0m");
//                printf("stlacili ste: %c", hadanyZnak);
//            }else if(time > 1 && time <= 1.5){
//                printf("\33[0;36m"); //cyan
//                printf("cas bol: %f\n", time);
//                printf("\33[0m");
//                printf("stlacili ste: %c", hadanyZnak);
//            }else if(time > 1.5){
//                printf("\33[0;31m"); //red
//                printf("cas bol: %f\n", time);
//                printf("\33[0m");
//                printf("stlacili ste: %c", hadanyZnak);
//            }
//        }else if(pocetPokusov >= 1){
//            if(time <= 1){
//                printf("\33[0;32m");
//                printf("cas bol: %f\n", time);
//                printf("\33[0m");
//                printf("Postupne ste stlacali: ");
//                int i = 0;
//                while(i <= pocetPokusov){
//                    printf("%c ", hadaneZnaky[i]);
//                    i++;
//                }
//            }else if(time > 1 && time <= 1.5){
//                printf("\33[0;36m");
//                printf("cas bol: %f\n", time);
//                printf("\33[0m");
//                printf("Postupne ste stlacali: ");
//                int i = 0;
//                while(i <= pocetPokusov){
//                    printf("%c ", hadaneZnaky[i]);
//                    i++;
//                }
//            }else if(time > 1.5){
//                printf("\33[0;31m");
//                printf("cas bol: %f\n", time);
//                printf("\33[0m");
//                printf("Postupne ste stlacali: ");
//                int i = 0;
//                while(i <= pocetPokusov){
//                    printf("%c ", hadaneZnaky[i]);
//                    i++;
//                }
//            }
//        }
//
//    }else if(b == 48){
//        return 0;
//    }
//
//    return 0;
//}