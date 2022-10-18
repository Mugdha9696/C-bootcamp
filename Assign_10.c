// Q.1) Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area();
int main()
{
    int r;
    float A;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    A = area(r);
    printf("Area of circle is %.2f", A);    //we will get 2 digit after decimal point if we write .2 between % and f
}
float area(int a)
{
    float P;
    P=(3.14*a*a);
    return P;
}
/*------------------------------------------------------------------------------------------*/
// Q.2) Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float interest(int, float, int);
int main()
{
    int a, c;
    float b, SI;
    printf("Enter Principal, Rate of Interest & Time respectively: ");
    scanf("%d %f %d", &a, &b, &c);
    SI = interest(a, b, c);
    printf("Thus Simple Interest = %f", SI);
}
float interest(int p,float r,int t)
{
    float simple_interest;
    simple_interest= ((p*r*t)/100);
    return simple_interest;
}
/*------------------------------------------------------------------------------------------------------------------------------------*/
// Q.3) Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int even_odd();
int main()
{
    int x, s;
    printf("Enter any number: ");
    scanf("%d", &x);
    s=even_odd(x);
    if (s==1)
        printf("Returned value = %d\nThus it is even", s);
    if (s==0)
        printf("Returned value = %d\nThus it is odd", s);
}
int even_odd(int a)
{
    if(a%2==0)
        return 1;
    return 0;
}
/*---------------------------------------------------------------------------------------------------------------*/
// Q.4) Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural_no(int);
int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    natural_no(n);
}
void natural_no(int a)
{
    int i;
    for(i=1; i<=a; i++)
    {
        printf(" %d", i);
    }
}
/*------------------------------------------------------------------------------------------------------*/
// Q.5) Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd_no(int);
int main()
{
    odd_no(10);
}
void odd_no(int a)
{
    int i=1;
    while(i<=(2*a))
    {
        printf(" %d", i);
        i+=2;
    }
}
/*------------------------------------------------------------------------------------------------------*/
// Q.6) Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int s;
    s=fact(5);
    printf("Factorial of a given no. is: %d", s);
}
int fact(int a)
{
    int i=1, product=1;
    while(i<=a)
    {
        product=product*i;
        i++;
    }
    return product;
}
/*--------------------------------------------------------------------------------------------------------------------------*/
// Q.7) Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int comb(int, int);
long int fact(int);
int main()
{
    int a, b, c;
    printf("Enter the values for n & r: ");
    scanf("%d %d", &a, &b);
    c=comb(a, b);
    printf("No. of combinations = %d", c);
    return 0;
}
int comb(int n, int r)
{
    int p=fact(n)/(fact(r)*fact(n-r));
    return p;
}
long int fact(int x)
{
    int i;
    long int factorial=1;
    for(i=1; i<=x; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
/*--------------------------------------------------------------------------------------------------------------------------*/
// Q.8) Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int arrangements(int, int);
long int fact(int);
int main()
{
    int x, y, s;
    printf("Enter the values for n & r: ");
    scanf("%d %d", &x, &y);
    s=arrangements(x, y);
    printf("No. of arrangements = %d", s);
}
int arrangements(int n, int r)
{
    int p;
    p=fact(n)/fact(n-r);
    return p;
}
long int fact(int y)
{
    int i;
    long int factorial=1;
    for(i=1; i<=y; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
/*--------------------------------------------------------------------------------------------------------------*/
// Q.9) Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int check(int, int);
int main()
{
    int x, n, s;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Enter any digit: ");
    scanf("%d", &x);
    s=check(n, x);
    if(s==1)
        printf("A given number contains a given digit");
    else
        printf("A given number doesn't contains a given digit");
}
int check(int a, int b)
{
    int y;
    while (a!=0)
    {
        y=a%10;
        a=a/10;
        if(y==b)
          return 1;       //if no. contains that digit
    }
    return 0;       //if doesn't contains that digit
}
/*--------------------------------------------------------------------------------------------------------------*/
// Q.10) Write a function to print all prime factors of a given number.
#include<stdio.h>
void prime_fact(int n)
{
    int i=2;
    while(i<=(n))
    {
        while(n%i==0)
        {
            printf("%d ", i);
            n=n/i;
        }
        i++;
    }
}
int main()
{
    int x;
    printf("Enter any no: ");
    scanf("%d", &x);
    prime_fact(x);
    return 0;
}
