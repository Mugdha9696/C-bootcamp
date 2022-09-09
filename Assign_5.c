// Q.1)Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        printf("MySirG\n");
    }
    return 0;
}
/*-------------------------------------------------------------------*/

// Q.2)Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int N, i=1;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    while(i<=N)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}
/*---------------------------------------------------------------------*/

// Q.3)Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    for(i=N; i>=1; i--)
    {
        printf("%d ", i);
    }
    return 0;
}
/*---------------------------------------------------------------------*/

// Q.4)Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    
    for(i=1; i<2*N; i+=2)
    {
        printf("%d ", i);
    }
    return 0;
}
/*----------------------------------------------------------------------*/

// Q.5)Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(i=2*N-1; i>=1; i-=2)
    {
        printf("%d ", i);
    }
    return 0;
}
/*--------------------------------------------------------------------*/

// Q.6)Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int N, i=2;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    while(i<=2*N)
    {
        printf("%d ",i);
        i+=2;
    }
    return 0;
}
/*--------------------------------------------------------------------*/

// Q.7)Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    for(i=2*N; i>1; i-=2)
    {
        printf("%d ", i);
    }
    return 0;
}
/*--------------------------------------------------------------------*/

// Q.8)Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int N, i=1;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    
    while(i<=N)
    {
        printf("%d ", i*i);
        i++;
    }
    return 0;
}
/*---------------------------------------------------------------------*/

// Q.9)Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    
    for(i=1; i<=N; i++)
    {
        printf("%d ", i*i*i);
    }
    return 0;
}
/*----------------------------------------------------------------------*/

// Q.10)Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the value for N: ");
    scanf("%d", &N);
    
    for(i=1; i<=10; i++)
    {
        printf("%d\n", N*i);
    }
    return 0;
}
