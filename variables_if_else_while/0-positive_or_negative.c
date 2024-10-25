/**
 * Fichier : 0-positive_or_negative.c
 * par korneevscp
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Imprime un nombre aléatoire et indique s'il
 * est positif, négatif ou zéro.
 * Retour : Toujours 0.
*/
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%d est positif\n", n);
    else if (n < 0)
        printf("%d est négatif\n", n);
    else
        printf("%d est zéro\n", n);
    return (0);
}
