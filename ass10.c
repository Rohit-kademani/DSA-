
#include<stdio.h>
void read(int a[100],int);
void prime(int a[100],int );
void main()
{
    int n, a[100];
    printf("Enter the numbers : ");
    scanf("%d",&n);
    read(a,n);
    prime(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void prime(int a[100],int n)
{
    int i,j, count = 0, m;

    for(j=0;j<n;j++)
    {
       m = a[i] / 2;


    for(i = 2; i <= m; i++)
    {
        if(a[i] % i == 0)
        {
            printf("Entered number is not prime");
            printf("\n");
            count = 1;
            break;
        }
    }
    if(count == 0)
    {
        printf("Entered number is prime");
        printf("\n");
    }
    return 0;
    }
}

