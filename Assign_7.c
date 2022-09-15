// Q.1) Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int pre=0, cur=1, next, N, i;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    i=0;
    while(i<N-1)
    {
        next=pre+cur;
        pre=cur;
        cur=next;
        i++;
    }
    printf("%d ", next);
    return 0;
}
/*---------------------------------------------------------------------------*/

// Q.2) Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int pre=0, cur=1, next, N, i;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    i=0;
    printf("1 ");
    while(i<N-1)
    {
        next=pre+cur;
        printf("%d ", next);
        pre=cur;
        cur=next;
        i++;
    }
    return 0;
}
/*----------------------------------------------------------------------*/

// Q.3) Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int pre=0, cur=1, next, x, i=0, flag=0;
    printf("Enter any number: ");
    scanf("%d", &x);
    while(i<=x)
    {
        next=pre+cur;
        pre=cur;
        cur=next;
        if(next==x)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
        printf("Yes! It is in the Fibonacci Series");
    else
        printf("Not in Fibonacci Series");
    
    return 0;
}
/*----------------------------------------------------------------------------*/

// Q.4) Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a, b, i=1;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &a, &b);
    while(i)
    {
        if(i%a==0 && i%b==0)
            break;
        i++;
    }
    printf("HCF = %d", a*b/i);
    return 0;
}
/****************************************************************/
Method 2: 

// Q.4) Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a, b, i, min, HCF;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &a, &b);
    
    min= a<b ? a:b;
    for(i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
            HCF=i;
    }
    printf("HCF = %d", HCF);
    return 0;
}
/*---------------------------------------------------------------------*/

// Q.5) Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int a, b, i=1;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &a, &b);
    
    while(i)
    {
        if(i%a==0 && i%b==0)
            break;
        i++;
    }
    printf("HCF = %d", (a*b)/i);
    if((a*b)/i == 1)
        printf("\nThus they are co-prime no.s");
    else
        printf("\nNot co-prime");
    return 0;
}
/*----------------------------------------------------------------------------*/

// Q.6)Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int n, i, flag=0;
    for(n=2; n<100; n++)
    {
        flag=0;
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ", n);
    }
    return 0;
}
/*--------------------------------------------------------------------*/

// Q.7) Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int x, y, n, i, flag=0;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &x, &y);
    
    for(n=x; n<=y; n++)
    {
        flag = 0;
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ", n);
    }
    return 0;
}
/*----------------------------------------------------------*/

// Q.8) Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int x, n, i, flag=0;
    printf("Enter no: ");
    scanf("%d", &x);
    
    for(n=x+1; n; n++)
    {
        flag = 0;
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ", n);
            break;
        }
    }
    return 0;
}
/*-------------------------------------------------------------*/

// Q.9)Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int x, y, sum=0, n;
    printf("Enter a no: ");
    scanf("%d", &x);
    n=x;
    while(n)
    {
        y=n%10;
        sum=sum+(y*y*y);
        n=n/10;
    }
    if(sum==x)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
/*------------------------------------------------------------------------------------------*/

// Q.10) Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int i, x, y, sum=0;
    for(i=0; i<1000; i++)
    {
        sum=0;
        x=i;
        while(x!=0)
        {
            y=x%10;
            x=x/10;
            sum=sum+(y*y*y);
        }
        if(sum==i)
            printf("%d ", i);
    }
    return 0;
}
