#include <stdio.h>

int main()
{
    // Declaration variable
    int A, B;
    // take input
    scanf("%d %d", &A, &B);
    // check condition for multiples
    if ((A % B == 0) || (B % A == 0))
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
}