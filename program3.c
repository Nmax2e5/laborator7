#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct nod {

    char *c;
    struct nod *next;
    struct nod *pred;
};

struct nod *sir=NULL;

void add(char *s)
{
    struct nod *q=(struct node*) malloc(sizeof(struct nod));

    q->c=(char*) malloc(1001);
    strcpy(q->c, s);
    q->next=NULL;
    q->pred=NULL;

    if(sir==NULL)
    {
        sir=q;
        return;
    }
    else
    {
        struct nod *t=sir;
        while(t->next!=NULL)
            t=t->next;

        t->next=q;
        q->pred=t;
    }
}

void afisare()
{
    struct nod *t=sir;

    while(t!=NULL)
    {
        printf("%s\n", t->c);
        t=t->next;
    }
}

int main()
{
    FILE* in  = fopen("input.txt",  "r");

    char *c=(char*) malloc(1001);

    while(fscanf(in, "%[^\n]\n", c)==1)
    {
        add(c);
    }

    afisare();
    
    return 0
}
