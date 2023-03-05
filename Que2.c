#include<stdio.h>
int hcf(int ,int);
int main()
{
    int a,b,ans;
    printf("Enter the two numbers ");
    scanf("%d%d",&a,&b);
    ans=hcf(a,b);
    printf("The hcf of %d and %d is %d",a,b,ans);
}

int hcf(int a,int b)
{
    int i,ans;
    for( i=1;i<a&&i<b;i++)
    {
        if(a%i==0&&b%i==0)
            ans=i;
    }
        
    return ans;
}