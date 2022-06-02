#include<stdio.h>
void read(int a[100],int );
void tax(int a[100],int);
void main()
{
    int n, a[100] ;
    printf("The number of tax payers is: \n");
    scanf("%d",&n);
    read(a,n);
    tax(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void tax(int a[100],int n)
{
    int i,p=0,r=0,sum=0,av ;
    for(i=0;i<n;i++)
    {
        if(a[i]>250000)
        {
            p++;
        }
        else if((a[i]>50000)&&(a[i]<150000))
        {
            r++;
        }
        sum=sum+a[i];

    }
    av=sum/n;
    printf("The number of people who paid tax more than 250000 is %d\n",p);
    printf("The number of people that paid tax more than 50000 and less than 150000 is %d.\n",r);
    printf("The average tax collected is : %d.",av);
}
