// Q.1)Write a program to print Hello Students on the screen.

#include<stdio.h>
int main()
{
    printf("Hello Students");
    return 0;
}


// Q.2)Write a program to print Hello in the first line and Students in the second line.
#include<stdio.h>
int main()
{
    printf("Hello\nStudents");
    return 0;
}


// Q.3)Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
#include<stdio.h>
int main()
{
    printf("\"MySirG\"");
    return 0;
}


/* Q.4)WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.*/
#include<stdio.h>
int main()
{
    float r, A;
    printf("Enter radius of a circle: ");
    scanf("%f", &r);
    A = 3.14*r*r;
    printf("Area of circle is %f having the radius %f", A,r);
}


// Q.5)WAP to calculate the length of String using printf function.
#include<stdio.h>
int main()
{
    int x;
    x=printf("MySirG");
    printf("Length of this string is %d", x);
    return 0;
}


// Q.6)WAP to print the name of the user in double quotes.
#include<stdio.h>
int main()
{
    printf("\"Hello, Amit Kumar\"");
    return 0;
}


// Q.7)WAP to print “%d” on the screen.
#include<stdio.h>
int main()
{
    printf("%%d");
    return 0;
}


// Q.8)WAP to print “\n” on the screen.
#include<stdio.h>
int main()
{
    printf("\\n");
    return 0;
}


// Q.9)WAP to print “\\” on the screen.
#include<stdio.h>
int main()
{
    printf("\\\\");
    return 0;
}

/*Q.10)WAP to take date as an input in below given format and convert the date format and display the result as given below.*/

#include<stdio.h>
int main()
{
    int x, y, z;
    printf("Enter todyas date in DD/MM/YYY format: ");
    scanf("%d/%d/%d", &x, &y,&z);
    printf("Day - %d, Month - %d, Year - %d", x, y, z);
    return 0;
}


/* Q.11)WAP to take time as an input in below given format and convert the time format and display the result as given below.*/
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter time in HH:MM format: ");
    scanf("%d:%d", &x, &y);
    printf("%d Hour and %d Minute", x, y);
    return 0;
}


/*Q.12)
Output is -> ineuron7*/
