//Giovedì 24 marzo 2022
#include <stdio.h>
#include <stdlib.h>
/* Si scriva una funzione con il seguente prototipo:

        int fun(int arr[], int len, int *diff)

    che prende come parametri un array di interi, la sua dimensione e un puntatore a intero. La funzione
    deve ritornare la somma di tutti gli elementi dell'array e deve salvare in *diff, la differenza 
    tra l'elemento maggiore ed il minore */

/*int fun(int arra[], int len, int *diff);
int main(){

    int size = 10;
    int array[size];

    for(int i = 0; i < size; i++)
    {
        printf("%d Inserisci numero: ", i+1);
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

        for (int i = 1; i<len; i++)
        {
            somma += arr[i];
            if (arr[i]> max)
            {
                max = arr[i];
            }
        }
    *diff = max - min;
    return somma;
        
}*/
    

/*
Si scriva una funzione con il seguente prototipo:

       int *insertElements(int *size)

La funzione deve permettere all’utente di inserire
numeri interi fino a che non inserisce -1, salvando i
numeri su un array dinamico. La funzione deve
ritornare l’indirizzo del primo elemento dell’array e
salvare nel puntatore *size la sua dimensione.
Dal main, dopo aver chiamato la funzione, si
stampino tutti gli elementi dell’array.
*/


// prototipo funzione
/*int *insertElements(int *size);

int main()
{
    int size = 0;
    int *ptr = insertElements(&size);

    if (size == 0 || ptr == NULL )
    {
        printf("\n Nessun elemento! \n");
        return -1;
    }

    printf("\n Elementi inseriti -->");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d) %d", i+1, ptr[i]);
    }

    free(ptr);
    printf("\n");
    return 0;
}
int *insertElements(int *size)
{
    int *array = NULL;
    *size = 0;

    while (1)
    {
        int input = -1;
        printf("\n Inserire un intero oppure -1 pre terminare: ");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        *size += 1;
        array = realloc(array, *size * sizeof(int));
        if (array == NULL)
        {
            printf("\nErrore di allocazione");
            *size = 0;
            return array;
        }
        array[*size - 1] = input;
    }
    return array;
}*/




