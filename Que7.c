//7. Write a function to print first N terms of Fibonacci series (TSRN)
void fibo(int );
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    fibo(n);
}

void fibo(int n)
{
    int a=-1,b=1,sum=0;
    printf("The %d terms of fibonacci series are ",n);
    while(n--){
    sum=a+b;
    printf("%d ",sum);
    a=b;
    b=sum;
    }
}