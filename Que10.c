//10. Write a program in C to find the sum of the series 1!/1 + 2!/2 +3!/3 + 4!/4 + 5!/5 using the function.
#include<stdio.h>
int fact(int);
void ans(int );
int main()
{
    float n;
    printf("Enter the number ");
    scanf("%f",&n);
    ans(n);
}

void ans(int n)
{
    float sum=0;
    while(n>=1)
    {
        sum=sum+(fact(n)/n);
        n--;
    }
    printf("%f ",sum);
}
int fact(int n)
{
    int fact=1;
    while(n>1)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}