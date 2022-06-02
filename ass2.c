#include<stdio.h>
void read(int a[100],int );
void check(int a[100],int);
void main()
{
    int n, a[100] ;
    printf("enter the value of n :");
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
    int i,key;
    printf("Enter the key : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("The key is present in the array at index= %d",i);

        }
    }
}
