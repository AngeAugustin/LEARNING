#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,res;
    printf("Donnez un nombre positif SVP : ");
    scanf("%d", &n);

    res=1;

    for(i=2;i<=n;i++)
    {
        res=res*i;
    }

    printf(" %d factorielle vaut %d", n, res);

    return 0;
}
