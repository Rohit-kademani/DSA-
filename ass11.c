#include<stdio.h>
void read(int a[100],int);
void charge(int a[100],int );
void main()
{
    int n, a[100];
    printf("Enter the number of flats : ");
    scanf("%d",&n);
    printf("Enter the Units consumed by each flat :");
    read(a,n);
    charge(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void charge(int a[100],int n)
{
    int i,bill;
    printf("The total bill to be paid by each flat is :");
    for(i=0;i<n;i++)
    {
        if(a[i]<100)
        {
            bill=a[i]*1.5;
        }
        else if((a[i]>101)&&(a[i]<250))
        {
            bill=a[i]*2.3;
        }
        else if((a[i>251])&&(a[i]<600))
        {
            bill=a[i]*4;
        }
        else if(a[i]>601)
        {
            bill=a[i]*5.5;
        }
        printf("%d\n",bill);
    }
}
