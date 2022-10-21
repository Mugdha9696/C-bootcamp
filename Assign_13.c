// Q.1) Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int x, s;
    printf("Enter the value for N: ");
    scanf("%d", &x);
    s=sum(x);
    printf("sum = %d", s);
}
int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
}
/*------------------------------------------------------------------------------------------*/

// Q.2) Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sum_odd(int);
int main()
{
    int s;
    s=sum_odd(5);
    printf("sum = %d", s);
    return 0;
}
int sum_odd(int n)
{
    if(n==1)
        return 1;
    return (2*n-1)+sum_odd(n-1);
}
/*----------------------------------------------------------------------------------------*/

// Q.3) Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sum_even(int);
int main()
{
    int x, s;
    printf("sum of first N even natural numbers\n");
    printf("\nEnter the value for N: ");
    scanf("%d", &x);
    s=sum_even(x);
    printf("sum = %d", s);
}
int sum_even(int n)
{
    if(n>0)
        return (2*n)+sum_even(n-1);
}
/*----------------------------------------------------------------------------------------*/

// Q.4) Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sum_squares(int);
int main()
{
    int x, s;
    printf("Enter the value for N: ");
    scanf("%d", &x);
    s=sum_squares(x);
    printf("Sum = %d", s);
    return 0;
}
int sum_squares(int n)
{
    if(n==1)
        return 1;
    return (n*n)+sum_squares(n-1);
}
/*----------------------------------------------------------------------------------------*/

// Q.5) Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum_of_digits(int);
int main()
{
    int x, s;
    printf("Enter any no: ");
    scanf("%d", &x);
    s=sum_of_digits(x);
    printf("sum of digits = %d", s);
    return 0;
}
int sum_of_digits(int n)
{
    if(n==0)
        return 0;
    return ((n%10)+sum_of_digits(n/10));
}
/*----------------------------------------------------------------------------------------*/

// Q.6) Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int factorial(int);
int main()
{
    int x, f;
    printf("Enter a no: ");
    scanf("%d", &x);
    f=factorial(x);
    printf("Factorial = %d", f);
    return 0;
}
int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    return (n*factorial(n-1));
}
/*----------------------------------------------------------------------------------------*/

// Q.7) Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int, int);
int main()
{
    int p, q, s;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &p, &q);
    s=hcf(p,q);
    printf("HCF = %d", s);
    return 0;
}
int hcf(int x, int y)
{
    int a, b;
    a=(x>y?x:y);
    b=(x<y?x:y);
    if(a%b==0)
        return b;
    return hcf((a%b),b);
}
/*----------------------------------------------------------------------------------------*/

// Q.8) Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibonacci(int);
int main()
{
    int N, i;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
        printf("%d ", fibonacci(i));
    return 0;
}
int fibonacci(int n)
{
    if(n==0||n==1)
        return n;
    
    return fibonacci(n-1)+fibonacci(n-2);
}
/*----------------------------------------------------------------------------------------*/

// Q.9) Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count_digits(int);
int main()
{
    int x, s;
    printf("Enter any no: ");
    scanf("%d", &x);
    s=count_digits(x);
    printf("No. of digits = %d", s);
    return 0;
}
int count_digits(int n)
{
    if(n/10==0)
        return 1;
    return 1+count_digits(n/10);
}
/*----------------------------------------------------------------------------------------*/

// Q.10) Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int, int);
int main()
{
    int x, y, s;
    printf("Enter a no: ");
    scanf("%d", &x);
    printf("Enter power: ");
    scanf("%d", &y);
    s=power(x, y);
    printf("%d^%d = %d", x, y, s);
    return 0;
}
int power(int n, int p)
{
    if(p==0)
        return 1;
    return n*power(n, p-1);
}
