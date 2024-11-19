#include<stdio.h>
int main()
{
    int ci,si;
    scanf("%d%d",&ci,&si);
    if(ci>si)
    {
        printf("Loss");
    }
    else if(ci==si)
    {
        printf("No Profit and No Loss");
    }
    else
    {
        printf("Profit");
    }
}