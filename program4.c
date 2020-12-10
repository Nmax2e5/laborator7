#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void problema4(int n)
{
    double **a=(double**) malloc(n*sizeof(double*));
    for(int i=0;i<n;i++)
        a[i]=(double*) malloc(n*sizeof(double));

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%lf", &a[i][j]);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%.2lf ", a[i][j]);
        printf("\n");
    }

    free(a);
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        problema4(n);
    }

    return 0;
}
