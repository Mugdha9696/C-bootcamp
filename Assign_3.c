// Q.1)Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    if(x>0)
        printf("It is a positive number");
    else
        printf("It is non-positive number");
    return 0;
}


// Q.2)Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    if(x%5==0)
        printf("Number is divisible by 5");
    else
        printf("Number is not divisible by 5");
    return 0;
}


// Q.3)Write a program to check whether a given number is an even number or an odd number.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    if(x%2==0)
        printf("It is even no.");
    else
        printf("It is odd no.");
    return 0;
}


// Q.4)Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter any number: ");
    scanf("%d", &x);
    y=x&1;
    if(y==0)
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}


// Q.5)Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int x, y, count=0;
    printf("Enter any number: ");
    scanf("%d", &x);
    while(x!=0)
    {
        y=x%10;
        count=count+1;
        x=x/10;
    }
    if(count==3)
        printf("This is 3 digit number");
    else
        printf("This is not a 3 digit number");
    return 0;
}


// Q.6)Write a program to print greater between two numbers. Print one number if both are the same.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("%d", a);
    else
        printf("%d", b);
    return 0;
}


// Q.7)Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter values for a, b and c in equation ax^2 + bx + c = 0: ");
    scanf("%d %d %d", &a, &b, &c);
    if((b*b - 4*a*c)<0)
        printf("Roots are imaginary");
    else if((b*b - 4*a*c)>0)
        printf("Roots are real & distinct");
    else
        printf("Roots are real & equal");
    return 0;
}


// Q.8)Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int x=2022;
    if(x%400==0)
        printf("Leap year");
    else if(x%4==0)
        printf("Leap year");
    else
        printf("Non leap year");
    return 0;
}


// Q.9)Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 no.s: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b)
    {
        if(a>c)
            printf("%d", a);
        else
            printf("%d", c);
    }
    else
    {
        if(b>c)
            printf("%d", b);
        else
            printf("%d", c);
    }
    return 0;
}


// Q.10)Write a program which takes the cost price and selling price of a product from the user.
//Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float cp, sp, p, l;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    p=sp-cp;
    l=cp-sp;
    if(sp>cp)
        printf("Profit percentage = %.3f %%", (p/cp)*100);
    else
        printf("Loss percentage = %.3f %%", (l/cp)*100);
    return 0;
}


// Q.11)Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.
// Now display whether the candidate passed the examination or failed.
#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
        printf("Pass");
    else
        printf("Fail");
        
    return 0;
}


// Q.12)Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char x;
    printf("Enter any alphabet: ");
    scanf("%c", &x);
    if(x<=90 && x>=65)
        printf("Uppercase");
    else if(x<=122 && x>=97)
        printf("Lowercase");
    else
        printf("Enter appropriate alphabet");
    return 0;
}


// Q.13)Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any no: ");
    scanf("%d", &x);
    if(x%3==0 && x%2==0)
        printf("Divisible by 3 & 2");
    else if(x%3==0)
        printf("Divisible by 3 only");
    else if(x%2==0)
        printf("Divisible by 2 only");
    else
        printf("Not divisible by both 3 & 2");
    return 0;
}


// Q.14)Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any no: ");
    scanf("%d", &x);
    if(x%7==0 || x%3==0)
        printf("Divisible by 7 or 3");
    else
        printf("Not divisible");
    return 0;
}


// Q.15)Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any no: ");
    scanf("%d", &a);
    
    if(a>0)
        printf("+ve");
    else if(a<0)
        printf("-ve");
    else
        printf("zero");
        
    return 0;

  
/* Q.16)Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case),
a digit or a special character.*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter any character: ");
    scanf("%c", &x);
    
    if(x>='A' && x<='Z')
        printf("Uppercase");
    else if(x>='a' && x<='z')
        printf("Lowercase");
    else if(x>='0' && x<='9')
        printf("Digit");
    else
        printf("Special character");
        
    return 0;
}

  
// Q.17)Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a+b>c && b+c>a && a+c>b)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}

  
// Q.18)Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
    int x;
    printf("Enter month no: ");
    scanf("%d", &x);
    if(x==1)
        printf("No. of days=31");
    else if(x==2)
        printf("No. of days=28/29");
    else if(x==3)
        printf("No. of days=31");
    else if(x==4)
        printf("No. of days=30");
    else if(x==5)
        printf("No. of days=31");
    else if(x==6)
        printf("No. of days=30");
    else if(x==7)
        printf("No. of days=31");
    else if(x==8)
        printf("No. of days=31");
    else if(x==9)
        printf("No. of days=30");
    else if(x==10)
        printf("No. of days=31");
    else if(x==11)
        printf("No. of days=30");
    else
        printf("No. of days=31");
    return 0;
}
