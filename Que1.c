#include<stdio.h>
int lcm(int ,int);
int main()
{
    int a,b,ans;
    printf("Enter the two numbers ");
    scanf("%d%d",&a,&b);
    ans=lcm(a,b);
    printf("The lcm of %d and %d is %d",a,b,ans);
}

int lcm(int a,int b)
{
    int i;
    for(i=a;i<a*b;i++)
    {
        if(i%a==0&&i%b==0)
            break;
    }
    return i;
}