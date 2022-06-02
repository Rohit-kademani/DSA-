#include<stdio.h>
void read(int a[100],int);
void check(int a[100],int );

void main()
{
    int n, a[100];
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    read(a,n);
    check(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void check(int a[100],int n)
{
    int i,j,s=0;
    for(i=0;i<n;i++);
    {
        for(j=1;j<=(a[i]);j++)
        {
            if(a[i]%j==0)
            {
                s=s+j;
            }
        }
        if(s==2*a[i])
        {
            printf("%d is a perfect number.\t",a[i]);
        }
        else
        {
            printf("%d is not a perfect number.\t",a[i]);
        }
    }
}
