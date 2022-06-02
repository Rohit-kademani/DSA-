#include<stdio.h>
void read(int a[100],int);
void mark(int a[100],int );
void main()
{
    int n, a[100];
    printf("Enter the number of students : ");
    scanf("%d",&n);
    read(a,n);
    mark(a,n);
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void mark(int a[100],int n)
{
    int i,eve=0,odd=0,stu=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            odd++;
        }
        else if(a[i]%2==0)
        {
            eve++;
        }
        if(a[i]==100)
        {
            printf("Student %d scored 100%. Good Keep it up!!!\n",i);
            stu++;
        }

    }
    printf("%d student(s) got odd marks.\n",odd);
    printf("%d student(s) got even marks.\n",eve);
    printf("%d Student(s) got 100%.",stu);

}
