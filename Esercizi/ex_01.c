/*
Si scriva una funzione con il seguente prototipo:

      int fun(int arr[ ], int len, int *diff)

che prende come parametri un array di interi, la sua
dimensione e un puntatore a intero. La funzione
deve ritornare la somma di tutti gli elementi dell’array
e deve salvare in *diff, la differenza tra l’elemento
maggiore ed il minore.
*/

#include <stdio.h>

// prototipo funzione
int fun(int arr[], int len, int *diff);

int main()
{
    int size = 10;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d) Inserisci numero: ", i + 1);
        scanf("%d", &array[i]);
        printf("\n");
    }
    int diff;
    int somma = fun(array, size, &diff);

    printf("\n Somma: %d, differenza: %d \n", somma, diff);

    return 0;
}

int fun(int arr[], int len, int *diff)
{
    if (len == 0)
    {
        *diff = 0;
        return 0;
    }

    int min = arr[0];
    int max = arr[0];
    int somma = arr[0];

    for (int i = 1; i < len; i++)
    {
        somma += arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    *diff = max - min;
    return somma;
}