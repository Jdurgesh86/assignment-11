#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    square(n);
}
void square(int n)
{
    printf("%d",n*n);
}