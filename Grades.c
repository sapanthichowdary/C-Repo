#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    float t=((s1+s2+s3+s4+s5)*100)/500;
    if (t>=90)
    {
        printf("Grade A");
    }
    else if(t>=80)
    {
       printf("Grade B");
    }
    else if(t>=70)
    {
        printf("Grade C");
    }
    else if(t>=60)
    {
        printf("Grade D");
    }
    else if(t>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}