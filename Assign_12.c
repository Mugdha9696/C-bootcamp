// Q.1) Write a recursive function to print first N natural numbers
#include<stdio.h>
void print_no(int);
int main()
{
    int x;
    printf("printing first N natural no.s\n");
    printf("\nEnter the value for N: ");
    scanf("%d", &x);
    print_no(x);
    return 0;
}
void print_no(int n)
{
    if(n>0)
    {
        print_no(n-1);
        printf("%d ", n);
    }
}
/*--------------------------------------------------------------------------------------*/

// Q.2) Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void print_no(int);
int main()
{
    print_no(5);
    return 0;
}
void print_no(int n)
{
    if(n>0)
    {
        printf("%d ", n);
        print_no(n-1);
    }
}
/*--------------------------------------------------------------------------------------*/

// Q.3) Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd_natural(int);
int main()
{
    odd_natural(5);
    return 0;
}
void odd_natural(int n)
{
    if(n>0)
    {
        odd_natural(n-1);
        printf("%d ", 2*n-1);
    }
}
/*---------------------------------------------------------------------------------------*/

// Q.4) Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void reverse_odd(int);
int main()
{
    reverse_odd(5);
    return 0;
}
void reverse_odd(int n)
{
    if(n>0)
    {
        printf("%d ", 2*n-1);
        reverse_odd(n-1);
    }
}
/*------------------------------------------------------------------------------------------*/

// Q.5) Write a recursive function to print first N even natural numbers
#include<stdio.h>
void even_no(int);
int main()
{
    even_no(5);
    return 0;
}
void even_no(int n)
{
    if(n>0)
    {
        even_no(n-1);
        printf("%d ", 2*n);
    }
}
/*-------------------------------------------------------------------------------------------*/

// Q.6) Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void reverse_even(int);
int main()
{
    reverse_even(5);
    return 0;
}
void reverse_even(int n)
{
    if(n>0)
    {
        printf("%d ", 2*n);
        reverse_even(n-1);
    }
}
/*-------------------------------------------------------------------------------------------*/

// Q.7) Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void squares(int);
int main()
{
    squares(5);
    return 0;
}
void squares(int n)
{
    if(n>0)
    {
        squares(n-1);
        printf("%d ", n*n);
    }
}
/*-------------------------------------------------------------------------------------------*/

// Q.8) Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void binary_no(int);
int main()
{
    int x;
    printf("Enter any no: ");
    scanf("%d", &x);
    binary_no(x);
    return 0;
}
void binary_no(int n)
{
    if(n==0)
        return;
    binary_no(n/2);
    printf("%d", n%2);
}
/*--------------------------------------------------------------------------------------------*/

// Q.9) Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octal_no(int);
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d", &x);
    octal_no(x);
    return 0;
}
void octal_no(int n)
{
    if(n==0)
        return;
    octal_no(n/8);
    printf("%d", n%8);
}
/*--------------------------------------------------------------------------------------------*/

// Q.10) Write a recursive function to print reverse of a given number
#include<stdio.h>
void reverse(int);
int main()
{
    int x;
    printf("Enter any no: ");
    scanf("%d", &x);
    reverse(x);
    return 0;
}
void reverse(int n)
{
    if(n>0)
    {
        printf("%d", n%10);
        reverse(n/10);
    }
}
