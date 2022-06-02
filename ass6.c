#include<stdio.h>
void read(int a[100],int );
void sort(int a[100],int);
void main()
{
    int n, a[100] ;
    printf("Enter the value of n :");
    scanf("%d",&n);
    read(a,n);
    sort(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void sort(int a[100],int n)
{
    int i,j,temp;
    printf("The rankings in ascending order is as follows :\n");
    for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (a[i] > a[j])
                {

                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;

                }

            }
        }
    printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", a[i]);
    printf("The highest rank is : %d\n",a[n-1]);
    printf("the lowest rank is : %d",a[0]);
}
