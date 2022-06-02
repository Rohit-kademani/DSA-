#include<stdio.h>
void read(int a[100],int );
void pen(int a[100],int);
void main()
{
    int n, a[100] ;
    printf("The number of students who returned the book late : ");
    scanf("%d",&n);
    printf("Days after deadline the student is returning the book :\t");
    read(a,n);
    pen(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void pen( int a[100],int n)
{
    int i,av,sum=0;
    for(i=0;i<n;i++)
    {
        a[i]=a[i]*2;
        sum=sum+a[i];

    }
    av=sum/n;

    printf("The average penalty paid by the students is %d.\n",av);
    printf("The total penalty paid by the students is %d.",sum);
}


