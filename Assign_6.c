// Q.1)Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int N, i=1, sum=0;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    while(i<=N)
    {
        sum=sum+i;
        i++;
    }
    printf("sum=%d", sum);
    return 0;
}
/*------------------------------------------------------------------------------*/

// Q.2)Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int N, i, sum=0;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    for(i=2; i<=2*N; i+=2)
    {
        sum = sum+i;
    }
    printf("Sum=%d", sum);
    return 0;
}
/*------------------------------------------------------------------------------*/

// Q.3)Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int N, i, sum =0;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    for(i=1; i<=2*N; i+=2)
    {
        sum = sum+i;
    }
    printf("Sum=%d", sum);
    return 0;
}
/*-------------------------------------------------------------------------------*/

// Q.4)Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int N, i=1, sum=0;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    
    while(i<=N)
    {
        sum=sum+(i*i);
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}
/*--------------------------------------------------------------------------------*/

// Q.5)Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int N, i, sum=0;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    i=1;
    while(i<=N)
    {
        sum=sum+(i*i*i);
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}
/*-------------------------------------------------------------------------------*/

// Q.6)Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i, n, fact=1;
    printf("Enter any number: ");
    scanf("%d", &n);
    i=n;
    while(i!=1)
    {
        if(i==0)
            break;
        fact=fact*i;
        i--;
    }
    printf("Factorial of %d is %d", n,fact);
    return 0;
}
/*--------------------------------------------------------------------------------*/

// Q.7) Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int x, y, count=0;
    printf("Enter any no.: ");
    scanf("%d", &x);
    
    while(x!=0)
    {
        y=x%10;
        count++;
        x=x/10;
    }
    printf("No. of digits is %d", count);
    return 0;
}
/*--------------------------------------------------------------------------------*/

// Q.8)Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int x, i, y;
    printf("Enter any number: ");
    scanf("%d", &x);
    for(i=2; i<x; i++)
    {
        y=x%i;
        if(y==0)
        {
            printf("Not a prime no.");
            break;
        }
    }
    if(y!=0)
        printf("Prime no.");
    return 0;
}
/*----------------------------------------------------------------*/

// Q.9) Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int x, y, i, flag=0;
    printf("Enter 2 no.s: ");
    scanf("%d %d", &x, &y);
    
    for(i=1; i; i++) 		//Or we can write - for(i=1; i<=x*y; i++)
    {
        if(i%x==0 && i%y==0)
            break;
    }
    printf("LCM = %d", i);
    return 0;
}
/*-----------------------------------------------------------------------------------*/

// Q.10) Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int x, y, rev_no=0;
    printf("Enter a no: ");
    scanf("%d", &x);
    while(x!=0)
    {
        y=x%10;
        x=x/10;
        rev_no=rev_no*10+y;
    }
    printf("Reversed no. is: %d", rev_no);
    return 0;
}
