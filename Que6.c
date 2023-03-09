#include<stdio.h>
void fornprime(int ,int);
int prime(int);
int main()
{
    int a,b;
    printf("Enter the two number ");
    scanf("%d%d",&a,&b);
    fornprime(a,b);
}
void fornprime(int a,int b)
{
    printf("The prime numbers between %d and %d are ",a,b);
    while(a<=b)
    {
        int isprime;
        isprime=prime(a);
        if(isprime)
            printf("%d ",a);
        a++;
    }
}
int prime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;

}