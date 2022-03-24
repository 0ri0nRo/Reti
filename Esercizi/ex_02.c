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

#include <stdio.h>
#include <stdlib.h>

// prototipo funzione
int *insertElements(int *size);

int main()
{
    int size = 0;
    int *ptr = insertElements(&size);

    if ((size == 0) || (ptr == NULL))
    {
        printf("\nNessun Elemento! \n");
        return -1;
    }
    printf("\nElementi inseriti -->");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d) %d", i + 1, ptr[i]);
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
        printf("\n inserire un intero oppure '-1' per terminare: ");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        *size += 1;
        array = realloc(array, *size * sizeof(int));
        if (array == NULL)
        {
            printf("\nErrore allocazione");
            *size = 0;
            return array;
        }
        array[*size - 1] = input;
    }
    return array;
}