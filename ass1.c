#include<stdio.h>
void read(int a[100],int );
void count(int a[100],int);
void main()
{
    int n, a[100] ;
    printf("enter the value of n :");
    scanf("%d",&n);
    read(a,n);
    count(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void count(int a[100],int n)
{
    int pos=0,neg=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }

    }
    printf("The number of positive numbers in the array is :%d \t", pos);
    printf("The number of negative numbers in the array is :%d", neg);

}
