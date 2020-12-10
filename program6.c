#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct nod {

    int c;
    struct nod *next;
    struct nod *pred;
};

struct nod *sir=NULL;

void init()
{
    sir=NULL;
}

void add()
{
    struct nod *q=(struct node*) malloc(sizeof(struct nod));

    printf("introdu numar:\n");
    scanf("%d", &q->c);
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

    system("cls");
    while(t!=NULL)
    {
        printf("%d ", t->c);
        t=t->next;
    }
    char c=getch();
}

int main()
{
    while(1)
    {
        system("cls");
        printf("q - iesire\n");
        printf("1 - initializare lista vida\n");
        printf("2 - adaugare la lista\n");
        printf("3 - afisare lista\n");

        char c=getch();

        switch(c)
        {
            case 'q':
                return 0;
            break;
            case '1':
                init();
            break;
            case '2':
                add();
            break;
            case '3':
                afisare();
            break;
        }
    }

    return 0;
}
