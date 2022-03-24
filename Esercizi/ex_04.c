/*
Si scriva un programma che consenta all’utente di
inserire numeri interi fino a che non ne inserisce uno
negativo. Il programma deve stampare i numeri
inseriti dall’utente nell’ordine inverso, la lista dei
numeri pari e la lista dei numeri dispari.
*/

#include <stdio.h>
#include <stdlib.h>

int *inserisciElementi(int *size);
void invertiNumeri(int *ptr, int size);
void stampaNumeri(int *ptr, int size);
void stampaPariDispari(int *ptr, int size);

int main()
{
    int size = 0;
    int *ptr = inserisciElementi(&size);

    printf("\nNumeri inseriti -->\n");
    stampaNumeri(ptr, size);
    printf("\n");

    stampaPariDispari(ptr, size);
    invertiNumeri(ptr, size);
    printf("\nNumeri invertiti -->\n");
    stampaNumeri(ptr, size);

    free(ptr);

    return 0;
}

int *inserisciElementi(int *size)
{
    *size = 0;
    int *ptr = NULL;

    while (1)
    {
        int input;
        printf("\nInserisci un numero: ");
        scanf("%d", &input);

        if (input < 0)
        {
            printf("\nFine inserimento...");
            return ptr;
        }
        *size += 1;
        ptr = realloc(ptr, *size * sizeof(int));
        ptr[*size - 1] = input;
    }
    return ptr;
}

void invertiNumeri(int *ptr, int size)
{
    // int a = 0;
    for (int i = size - 1, a = 0; i > (size - 1) / 2; i--, a++)
    {
        int num = ptr[i];
        ptr[i] = ptr[a];
        ptr[a] = num;
        // a++;
    }
}

void stampaPariDispari(int *ptr, int size)
{
    printf("\nNumeri pari -->\n");
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            printf("%d-", ptr[i]);
        }
    }

    printf("\nNumeri dispari -->\n");
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] % 2 != 0)
        {
            printf("%d-", ptr[i]);
        }
    }
}

void stampaNumeri(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}