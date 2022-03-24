/*
Si scriva un programma che dichiara un array di 10
interi da far inserire all’utente. Si scriva una
funzione con prototipo:

       int funzione(int arr[ ], int size,int numero, int nuovoNumero)

La funzione deve sostituire nell’array tutte le
occorrenze di «numero» con «nuovoNumero» e
restituire la prima posizione in cui trova «numero».
Se «numero» non è presente, deve restituire -1
*/

#include <stdio.h>

int funzione(int arr[], int size, int numero, int nuovoNumero);

int main()
{
    int size = 10;
    int array[10];
    int numeroTrovare;
    int numeroSostituire;

    for (int i = 0; i < size; i++)
    {
        printf("\nInserisci numero in posizione %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\nInserisci numero da trovare: ");
    scanf("%d", &numeroTrovare);
    printf("\nInserisci numero da sotituire: ");
    scanf("%d", &numeroSostituire);

    int primaOccorrenza = funzione(array, size, numeroTrovare, numeroSostituire);

    printf("\nPrima occorrenza: %d", primaOccorrenza);
    printf("\nArray modificato -->");
    for (int i = 0; i < size; i++)
    {
        printf("%d-", array[i]);
    }
    printf("\n");

    return 0;
}

int funzione(int arr[], int size, int numero, int nuovoNumero)
{
    int primaOccorrenza = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == numero)
        {
            arr[i] = nuovoNumero;
            if (primaOccorrenza == -1)
            {
                primaOccorrenza = i;
            }
        }
    }

    return primaOccorrenza;
}
