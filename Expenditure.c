#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int tot=y*30;
    if(x>=tot)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}