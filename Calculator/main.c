#include <stdio.h>
#include <stdlib.h>

int soustraction (int a, int b)
{
    return a-b;
}

int addition (int a,int b)
{
    return a+b;
}

int main()
{
    printf("le resultat de 4+1 est %d\n",addition(4,1));
    printf("le resultat de 4-1 est %d",soustraction(4,1));
    return 0;
}
