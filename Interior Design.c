#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int a=x1+y1;
    int b=x2+y2;
    if(a>b)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",a);
    }
}