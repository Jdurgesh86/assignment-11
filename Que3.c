
#include<stdio.h>
int prime(int);
int checkNext(int );
int main()
{
    int n,ans;
    printf("Enter the number ");
    scanf("%d",&n);
    ans=checkNext(n);
    printf("The next prime number is %d",ans);
}

int checkNext(int n)
{
    while(n)
    {
        n+=1;
        int isprime;
        isprime=prime(n);
        if(isprime)
            return n;
    }
}
int prime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;

}