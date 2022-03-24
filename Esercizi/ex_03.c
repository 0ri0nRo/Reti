/*
Si scriva cosa stampano le 5 printf:
*/
#include <stdio.h>

void funzione1(int *num1, int num2);
void funzione2(int num1, int *num2);

int main()
{
    int a = 1;
    int b = 2;

    printf("main1 --> a; %d, b: %d", a, b);
    funzione1(&a, b);
    printf("\nmain2 --> a: %d, b %d", a, b);
    funzione2(a, &b);
    printf("\nmain3 --> a: %d, b: %d \n", a, b);

    return 0;
}

void funzione1(int *num1, int num2)
{
    num2 = *num1 + 3;
    *num1 = *num1 + 12;
    printf("\nfunzione1 --> num1: %d, num2: %d", *num1, num2);
}

void funzione2(int num1, int *num2)
{
    *num2 = num1;
    printf("\n funzione2 --> num1: %d, num2: %d", num1, *num2);
}