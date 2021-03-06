#include <stdio.h>

struct node {
    int num;
    struct node * nextptr;
}*stnode;

void create(int n);
void insert(int num);
void display(int a);

int main()
{
    int n,num1,a;
    stnode = NULL;
    printf(" Linked list : ");
    scanf("%d", &n);
    create(n);
    a=1;
    display(a);
	printf(" Input data to be inserted at the beginning : ");
    scanf("%d", &num1);
    insert(num1);
    a=2;
    display(a);
    return 0;
}

void create(int n)
{
    int i, num;
    struct node *preptr, *newnode;

    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;
        preptr = stnode;
        for(i=2; i<=n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf(" Input data for node %d : ", i);
            scanf("%d", &num);
            newnode->num = num;
            newnode->nextptr = NULL;
            preptr->nextptr = newnode;
            preptr = newnode;
        }
        preptr->nextptr = stnode;
    }
}

void insert(int num)
{
    struct node *newnode, *curNode;
    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->num = num;
        newnode->nextptr = stnode;
        curNode = stnode;
        while(curNode->nextptr != stnode)
        {
            curNode = curNode->nextptr;
        }
        curNode->nextptr = newnode;
        stnode = newnode;
    }
}
void display(int m)
{
    struct node *tmp;
    int n = 1;

    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = stnode;
        if (m==1)
        {
        printf("\n Data entered in the list are :\n");
        }
        else
        {
         printf("\n After insertion the new list are :\n");
        }
        do {
            printf(" Data %d = %d\n", n, tmp->num);
            tmp = tmp->nextptr;
            n++;
        }while(tmp != stnode);
    }
}
