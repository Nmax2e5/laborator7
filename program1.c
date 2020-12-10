#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE* in  = fopen("input.txt",  "r");

    char *c=(char*) malloc(1001);
    char *ans=NULL;

    while(fscanf(in, "%[^\n]\n", c)==1)
    {
        if(ans==NULL)
        {
            ans=(char*) malloc(strlen(c));
            strcpy(ans,c);
        }
        else
        {
            ans=(char*) realloc(ans, (strlen(ans)+strlen(c)));
            strcat(ans, c);
        }
    }

    printf("%s", ans);

    return 0;
}
