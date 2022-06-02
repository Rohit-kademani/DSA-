#include<stdio.h>
void read(int a[100],int );
void disp(int a[100],int );
void main()
{
    int n, a[100] ;
    printf("enter the value of N :");
    scanf("%d",&n);
    read(a,n);
    disp(a,n);

}

void read(int a[100],int n)
{
    int i,exp;

    for(i=0;i<n;i++)
    {
        printf("Enter the experience of the employee : ");
        scanf("%d",&exp);
        if((exp>=5)&&(exp<=7))
        {
            a[i]=11660;
        }
        else if((exp>=8)&&(exp<=10))
        {
            a[i]=23430;
        }
        else if(exp>10)
        {

            a[i]=35310;
        }
        //printf("%d",a[i]);
    }
}

void disp(int a[100],int n)
{
    int i;
    printf("the salary of the employees are : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
