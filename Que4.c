#include<stdio.h>
int prime(int);
int main()
{
    int n,ans;
    printf("Enter the number ");
    scanf("%d",&n);
    ans=prime(n);
    if(ans)
        printf("%d number is prime ",n);
    else
        printf("%d number is not prime ",n);
}

int prime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;

}