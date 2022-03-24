/*
Si scriva un programma che consenta all’utente di
inserire una stringa salvata in un array dinamico.
Il programma deve stampare la stringa invertita.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inserisciStringa();
void invertiStringa(char *stringa);

int main()
{
    char *stringa = inserisciStringa();

    printf("\nLa stringa inserita è: %s\n", stringa);
    invertiStringa(stringa);
    printf("\nLa stringa invertita è: %s\n", stringa);

    free(stringa);
}

char *inserisciStringa()
{
    int n = 0;
    char ch;
    char *stringa = NULL;

    while ((ch = getchar()) != '\n')
    {
        n++;
        stringa = realloc(stringa, n + 1);
        if (stringa == NULL)
        {
            printf("Non è possibile allocare spazio...\n");
            return stringa;
        }
        stringa[n - 1] = ch;
    }
    stringa[n] = '\0';

    return stringa;
}

void invertiStringa(char *stringa)
{
    int size = strlen(stringa);
    // int a = 0;
    for (int i = size - 1, a = 0; i > (size - 1) / 2; i--, a++)
    {
        char c = stringa[a];
        stringa[a] = stringa[i];
        stringa[i] = c;
        // a++;
    }
}
