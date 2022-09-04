// Q.1)Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    x=x%10;
    printf("The unit digit of a given number is: %d", x);
    return 0;
}


// Q.2)Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    x=x/10;
    printf("The number without its last digit is: %d", x);
    return 0;
}


// Q.3)Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a=20, b=30, c;
    c=a;
    a=b;
    b=c;
    printf("After swaping, a=%d and b=%d", a,b);
    return 0;
}


// Q.4)Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a=30, b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping, a=%d and b=%d", a, b);
    return 0;
}


// Q.5)Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x, y, sum=0;
    printf("Enter any 3 digit numbeer: ");
    scanf("%d", &x);
    y=x%10;
    x=x/10;
    sum=sum+y;
    y=x%10;
    x=x/10;
    sum=sum+y;
    y=x%10;
    sum=sum+y;
    printf("Sum of digits of a given number is:%d ", sum);
    return 0;
}


// Q.6)Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char p;
    printf("Enter any character: ");
    scanf("%c", &p);
    printf("Its ASCII code is %d", p);
    return 0;
}


// Q.7)Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int x, y, count=0, i;
    printf("Enter any number: ");
    scanf("%d", &x);
    while(x!=0)
    {
        y=x&1;
        count=count+1;
        if(y==1)
        {
            printf("%d", count);
            break;
        }
        x=x>>1;
    }
    return 0;
}


// Q.8)Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter any number: ");
    scanf("%d", &x);
    y=x&1;                  //If we take & of any number with 1, we will get result either 0 or 1. If we get result 0, then that no. is even;
                            //if we get result 1, then that no. is odd
    if (y==1)
        printf("It is an odd number");
    else
        printf("It is an even number");
    return 0;
}


// Q.9)Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int a, b, c, d;
    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(char);
    d=sizeof(double);
    printf("Size of an int, a float, a char and a double are respectively %d, %d, %d and %d", a, b, c, d);
    return 0;
}


/* Q.10)Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int x=2345, y;
    y = x%10;
    x=x-y;
    printf("If x=2345 then the final result is: %d", x);
    return 0;
}


/* Q.11)Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number*/
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter any number: ");
    scanf("%d", &x);
    printf("Enter a digit you want to append: ");
    scanf("%d", &y);
    printf("After appending, the resulting number is: %d", (x*10)+y);
    return 0;
}


// Q.12)Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    float p;
    printf("Enter amount in INR: ");
    scanf("%f", &p);
    printf("Amount in USD is: %f", p/76.23);
    return 0;
}


// Q.13)Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter any 3 digit number: ");
    scanf("%d", &x);
    y=x%10;
    x=x/10;
    printf("After rotation of its digit by 1 position towards right, we get: %d", (y*100)+x);
    return 0;
}
