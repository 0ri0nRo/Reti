//Giovedì 24 marzo 2022
#include <stdio.h>
/* Si scriva una funzione con il seguente prototipo:

        int fun(int arr[], int len, int *diff)

    che prende come parametri un array di interi, la sua dimensione e un puntatore a intero. La funzione
    deve ritornare la somma di tutti gli elementi dell'array e deve salvare in *diff, la differenza 
    tra l'elemento maggiore ed il minore */

int fun(int arra[], int len, int *diff);
int main(){

    int size = 10;
    int array[size];

    printf("inserire dimensioni vettore = ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
    }

    printf("la somma degli elementi del vettore e' %d\n", somma(a, n));

    system("pause");
    return 0;
}


    int somma(int a[], int n){
    int i, sum = 0;

    for(i=0;i<n;i++){
    sum=sum+a[i];
}
    return sum;
}
    return 0;
}



