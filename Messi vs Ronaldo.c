#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int m=(a*2)+(b*1);
    int r=(x*2)+(y*1);
    if(m>r)
    {
        printf("Messi");
    }
    else if(r>m)
    {
        printf("Ronaldo");
    }
    else
    {
        printf("Equal");
    }
}