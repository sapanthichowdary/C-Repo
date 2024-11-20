#include<stdio.h>
int main()
{
    int n,x,m;
    scanf("%d%d%d",&n,&x,&m);
    if((n+m)>=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}