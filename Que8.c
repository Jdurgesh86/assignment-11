//8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int combination(int,int );
int fact(int );
void pascal(int);
int main()
{
    int n;
    printf("Enter the number by which you want to print pascal triangle ");
    scanf("%d",&n);
    pascal(n);
}
void pascal(int n)
{
    int c;
    for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n - i; j++) {
                printf(" ");
            }
            for (int j = 0; j <= i; j++) {
                // nCr formula
                printf(" %d",combination(i,j));
            }
 
            // for newline
            printf("\n");
        }
}
int  combination(int n,int r)
{
    if(n-r!=0&&n!=0&&r!=0)
        return fact(n)/(fact(n-r)*fact(r));
    return 1;
}

int fact(int n)
{
    int fact=1;
    if(n<=2)
        return n;
    for(int i=2;i<=n;i++)
        fact=fact*i;
    return fact;
}