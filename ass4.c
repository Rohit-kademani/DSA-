#include<stdio.h>
void read(int a[100],int );
void av(int a[100],int);
void main()
{
    int n=10, a[100] ;
    printf("Enter the marks obtained by the students");
    read(a,n);
    av(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void av(int a[100],int n)
{
    int i,av,sum=0,abo=0,bel=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    av=sum/n;
    printf("Average of the class is %d.\n",av);
    for(i=0;i<n;i++)
    {
        if(a[i]>=av)
        {
            abo++;
        }
        else if(a[i]<av)
        {
            bel++;
        }
    }
    printf("The number of students above average is %d \n", abo);
    printf("The number of students below average is %d.",bel);


}
