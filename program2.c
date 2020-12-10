#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE* in  = fopen("input.txt",  "r");

    int len=1;
    char **ans=(char**) malloc(sizeof(char*));
    ans[0]=(char*) malloc(1001);

    while(fscanf(in, "%[^\n]\n", ans[len-1])==1)
    {
        len++;
        ans=(char**) realloc(ans, len*sizeof(char*));
        ans[len-1]=(char*) malloc(1001);
    }

    len--;
    for(int i=0;i<len;i++)
        printf("%s\n", ans[i]);
}
