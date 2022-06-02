#include<stdio.h>
void read(int a[100],int );
void exp(int a[100],int);
void main()
{
    int n=12, a[100] ;
    printf("Expenditure each month : \t");
    read(a,n);
    exp(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void exp(int a[100],int n)
{
    int i,sum=0,av;
    for (i = 0; i < n; ++i)
        {
            if(a[i]>35000)
            {
                printf("The expenditure of month %d is more than 35000 and is %d.\n",i,a[i]);
            }
        sum=sum+a[i];

        }
    av=sum/n;
    printf("the average Expenditure is %d",av);

}
