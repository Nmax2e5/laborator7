#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE* in  = fopen("input.txt",  "r");

    char *c=(char*) malloc(1001 * sizeof(char));
    int len=0;
    char *ans=NULL;

    while(fscanf(in, "%[^\n]\n", c)==1)
    {
        if(ans==NULL)
        {
            ans=(char*) malloc(strlen(c)*sizeof(char));
            strcpy(ans,c);
        }
        else
        {
            ans=(char*) realloc(ans, (len+strlen(c))*sizeof(char));
             strcat(ans, c);
        }
    }

    //ans[len]='\0';
    printf("%s", ans);

    return 0;
}
