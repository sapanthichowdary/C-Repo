#include<stdio.h>
int great(int a,int b,int c)
{
    if(a>b && a<c)
    {
        return a+c;
    }
    else if(b>a && b<c)
    {
        return b+c;
    }
    else
    {
        return a+b;
    }
}
int main()
{
    int a1,a2,a3,b1,b2,b3;
    scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
    int x=great(a1,a2,a3);
    int y=great(b1,b2,b3);
    if(x>y)
    {
        printf("Alice");
    }
    else if(x==y)
    {
        printf("Tie");
    }
    else
    {
        printf("Bob");
    }
}