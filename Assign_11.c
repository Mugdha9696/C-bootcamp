// Q.1) Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int, int);
int main()
{
    int x, y, s;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &x, &y);
    s=LCM(x, y);
    printf("LCM of the no.s = %d", s);
    return 0;
}
int LCM(int a, int b)
{
    int i;
    for(i=1; i<=a*b; i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
}
/*-----------------------------------------------------------------------------------*/

// Q.2) Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int, int);
int main()
{
    int x, y, s;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &x, &y);
    s=HCF(x, y);
    printf("HCF = %d", s);
    return 0;
}
int HCF(int a, int b)
{
    int i;
    for(i=1; i<=a*b; i++)
    {
        if(i%a==0 && i%b==0)
            return ((a*b)/i);
    }
}
/*-------------------------------------------------------------------------------------*/

// Q.3) Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime_checker(int);
int main()
{
    int n, s;
    printf("Enter any no: ");
    scanf("%d", &n);
    s=prime_checker(n);
    if(s==1)
        printf("Prime");
    else if(s==0)
        printf("Not prime");
    else
        printf("Neither prime nor composite");
    return 0;
}
int prime_checker(int x)
{
    int i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
            return 0;
    }
    if(x==1)
        return 2;
    else
        return 1;
}
/*--------------------------------------------------------------------------------------*/

// Q.4) Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nxt_prime(int);
int main()
{
    int n, s;
    printf("Enter a no: ");
    scanf("%d", &n);
    s=nxt_prime(n);
    printf("The next prime no. is %d", s);
    return 0;
}
int nxt_prime(int x)
{
    int n, i, flag=0;
    for(n=x+1; n; n++)
    {
        flag=0;
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
        {
            return n;
            break;
        }
    }
}
/*---------------------------------------------------------------------------*/

// Q.5) Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void prime(int);
int main()
{
    int N;
    printf("printing first N prime numbers\n");
    printf("\nEnter the value for N: ");
    scanf("%d", &N);
    prime(N);
    return 0;
}
void prime(int n)
{
    int j, k, flag=0;
    int count=n;
    for(j=2; count!=0; j++)
    {
        flag = 0;
        for(k=2; k<=j/2; k++)
        {
            if(j%k==0)
                flag = 1;
        }
        if(flag==0)
        {
            printf("%d ", j);
            count--;
        }
    }
}
/*-------------------------------------------------------------------------------------*/

// Q.6) Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime(int, int);
int main()
{
    int x, y;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &x, &y);
    prime(x, y);
    return 0;
}
void prime(int a, int b)
{
    int n, i, flag = 0;
    for(n=a; n<=b; n++)
    {
        flag = 0;
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
                flag = 1;
        }
        if(flag==0)
            printf("%d ", n);
    }
}
/*-----------------------------------------------------------------------------------------*/

// Q.7) Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonacci(int);
int main()
{
    int N;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    fibonacci(N);
    return 0;
}
void fibonacci(int n)
{
    int prev, cur, next, i;
    prev=1;
    cur=1;
    next=0;
    printf("1 1 ");
    for(i=1; i<=n-2; i++)
    {
        next=prev+cur;
        printf("%d ", next);
        prev=cur;
        cur=next;
    }
}
/*----------------------------------------------------------------------------------------*/

// Q.8) Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
void pascal(int);
int comb(int, int);
int fact(int);
int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    pascal(n);
    return 0;
}

int fact(int n)
{
    int i, product=1;
    for(i=1; i<=n; i++)
    {
        product=product*i;
    }
    return product;
}

int comb(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}

void pascal(int x)
{
    int i, j;
    for(i=0; i<=x; i++)
    {
        for(j = 0; j <= x-i; j++)
            printf("  ");
        for(j=0; j<=i; j++)
        {
            printf("%4d",  comb(i,j));
        }
        printf("\n");
    }
}
/*-------------------------------------------------------------------------------------*/

// Q.9) Write a program in C to find the square of any number using the function.
#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("Enter any no: ");
    scanf("%d", &n);
    square(n);
    return 0;
}
void square(int x)
{
    printf("square of %d = %d", x, x*x);
}
/*--------------------------------------------------------------------------------------*/

// Q.10) Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fact(int);
void print_series();
int main()
{
    print_series();
    return 0;
}
int fact(int n)
{
    int i, product=1;
    for(i=1; i<=n; i++)
    {
        product=product*i;
    }
    return product;
}
void print_series()
{
    int i, sum=0;
    for(i=1; i<=5; i++)
    {
        sum = sum + (fact(i)/i);
    }
    printf("sum of the series = %d", sum);
}
