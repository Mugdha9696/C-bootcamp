//Assignment 9		Switch Case Problems

// Q.1) Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    while(1)
    {
        printf("Enter the month number: ");
        scanf("%d", &x);
        switch(x)
        {
            case 0: 
                printf("exit");
                exit(0);
            case 1: printf("No. of days = 31");
                    break;
            case 2: printf("No. of days = 28 or 29");
                    break;
            case 3: printf("No. of days = 31");
                    break;
            case 4: printf("No. of days = 30");
                    break;
            case 5: printf("No. of days = 31");
                    break;
            case 6: printf("No. of days = 30");
                    break;
            case 7: printf("No. of days = 31");
                    break;
            case 8: printf("No. of days = 31");
                    break;
            case 9: printf("No. of days = 30");
                    break;
            case 10: printf("No. of days = 31");
                    break;
            case 11: printf("No. of days = 30");
                    break;
            case 12: printf("No. of days = 31");
                    break;
            default: printf("Enter valid choice");
        }
        printf("\n________________________________________________");
        printf("\n Enter 0 for Exit  OR  ");
    }
}
/*-------------------------------------------------------------------------------*/

// Q.2) Write a menu driven program with the following options:
//a. Addition    b. Subtraction  c. Multiplication   d. Division     e. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, a, b;
    while(1)
    {
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &x);
        
        switch(x)
        {
            case 1:
                printf("Enter 2 no.s: ");
                scanf("%d %d", &a, &b);
                printf("Sum = %d\n", a+b);
                printf("---------------------------------\n");
                break;
            case 2:
                printf("Enter 2 no.s: ");
                scanf("%d %d", &a, &b);
                printf("Subtraction = %d\n", a-b);
                printf("---------------------------------\n");
                break;
            case 3:
                printf("Enter 2 no.s: ");
                scanf("%d %d", &a, &b);
                printf("Product = %d\n", a*b);
                printf("---------------------------------\n");
                break;
            case 4:
                printf("Enter 2 no.s: ");
                scanf("%d %d", &a, &b);
                printf("Quotient = %d\n", a/b);
                printf("---------------------------------\n");
                break;
            case 5:
                printf("Exit");
                exit(0);
            default: printf("Invalid choice");
        }
    }
}
/*------------------------------------------------------------------------------------*/

//Q.3) Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the day number: ");
    scanf("%d", &x);
    
    switch(x)
    {
        case 1: printf("Have a fabulous week..Happy Monday!!");
                break;
        case 2: printf("May your day be filled with positive things..Happy Tuesday!!");
                break;
        case 3: printf("Not the day only, but all things have their morning..Happy Wednesday!!");
                break;
        case 4: printf("Every day is a chance to change ur life..Happy Thurday!!");
                break;
        case 5: printf("Make each day ur Masterpiece..Happy Friday!!");
                break;
        case 6: printf("Start the day right with a smile..Happy Saturday!!");
                break;
        case 7: printf("Dream big & take action to your goal..Happy Sunday Morning!!");
                break;
    }
}
/*-----------------------------------------------------------------------------------------------------*/

// Q.4)

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x;
    while(1)
    {
        printf("\n---------------------------------------------------------------------------------------------------------------");
        printf("\n1.Check for isosceles triangle\n2.Check for right angled triangle\n3.Check for equilateral triangle\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                printf("Enter 3 sides: ");
                scanf("%d %d %d", &a, &b, &c);
                if(a==b || b==c || a==c)
                    printf("isosceles");
                else
                    printf("Not an isosceles");
                break;
            case 2:
                printf("Enter 3 sides: ");
                scanf("%d %d %d", &a, &b, &c);
                if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
                    printf("right angled");
                else
                    printf("Not right angled");
                break;
            case 3:
                printf("Enter 3 sides: ");
                scanf("%d %d %d", &a, &b, &c);
                if(a==b && b==c && a==c)
                    printf("equilateral");
                else
                    printf("Not an equilateral");
                break;
            case 4: printf("Exit");
                    exit(0);
            default: printf("Invalid choice");
        }
    }
}
/*---------------------------------------------------------------------------------------*/

// Q.5)
#include<stdio.h>
int main()
{
    int var;
    printf("Enter the value for var: ");
    scanf("%d", &var);
    
    switch(var)
    {
        case 1: printf("good");
                break;
        case 2: printf("better");
                break;
        case 3: printf("best");
                break;
        default: printf("invalid");
    }
}
/*---------------------------------------------------------------------------------------*/

// Q.6)Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year: ");
    scanf("%d", &x);
    switch(x%4==0 || x%400 ==0)
    {
        case 1: printf("leap");
                break;
        case 0: printf("non leap");
                break;
    }
}
/*----------------------------------------------------------------------------------------*/

//Q.7)

#include<stdio.h>
int main()
{
    float x, amount, total;
    printf("Enter the electricity unit consumption: ");
    scanf("%f", &x);
    
    switch(x<=50)
    {
        case 1:
            amount=x*0.50;
            break;
        case 0:
            switch(x<=150)
            {
                case 1:
                    amount=50*0.50+(x-50)*0.75;
                    break;
                case 0:
                    switch(x<=250)
                    {
                        case 1:
                            amount=(50*0.50)+(100*0.75)+(x-150)*1.20;
                            break;
                        case 0:
                            amount=(50*0.50)+(100*0.75)+(100*1.20)+(x-250)*1.50;
                    }
            }
    }
    total = amount+(amount/5);
    printf("Total bill = %.4f", total);
    return 0;
}
/*--------------------------------------------------------------------------------------------*/

//Q.8)Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    switch(x<0)
    {
        case 1:
            printf("%d", x*(-1));
            break;
        case 0:
            printf("%d", x*(-1));
            break;
    }
    return 0;
}
/*---------------------------------------------------------------------------------------------*/

// Q.9)Program to Convert even number into its upper nearest odd number switch statement.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    switch(x%2==0)
    {
        case 1:
            printf("its upper nearest odd number = %d", x+1);
            break;
        case 0:
            printf("%d\nIt is odd itself", x);
    }
    return 0;
}
/*----------------------------------------------------------------------------------------------*/

// Q.10) C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d;
    printf("Enter the coeff. of quadratic equation ax^2 + bx + c = 0 :\n");
    scanf("%d %d %d", &a, &b, &c);
    d=(b*b)-4*a*c;
    switch(d>0)
    {
        case 1:
            printf("Roots are: %.2f and %.2f", (-b+(sqrt(d)))/(2*a), (-b-(sqrt(d)))/(2*a));
            break;
        case 0:
            switch(d<0)
            {
                case 1:
                    printf("Roots are: %.2f i and %.2f i", (-b+(sqrt(4*a*c - b*b)))/(2*a), (-b-(sqrt(4*a*c - b*b)))/(2*a));
                    break;
                case 0:
                    printf("Roots are: %d and %d", -b/2*a, -b/2*a);
                    break;
            }
            break;
    }
    return 0;
}
