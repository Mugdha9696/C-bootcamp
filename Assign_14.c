// Q.1)Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10], i, sum=0;
    printf("Enter 10 values: ");
    for(i=0;i<=9;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<=9;i++)
        sum=sum+arr[i];
    printf("Sum of given no.s= %d", sum);
    return 0;
}
/*------------------------------------------------------------------------------------------------------------------*/

// Q.2)Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], i, sum=0;
    float avg;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d", &a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    avg=sum/10.0;
    printf("Average=%f", avg);
    return 0;
}
/*------------------------------------------------------------------------------------------------------------------*/

// Q.3)Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], i, sum1=0, sum2=0;
    printf("Enter 10 values: ");
    for(i=0;i<=9; i++)
        scanf("%d", &a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            sum1=sum1+a[i];
        else
            sum2=sum2+a[i];
    }
    printf("Sum of even no.s=%d", sum1);
    printf("\nSum of odd no.s=%d", sum2);
    return 0;
}
/*------------------------------------------------------------------------------------------------------------------*/

// Q.4) Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], i, greatest_no=-1;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    
    for(i=0; i<=9; i++)
    {
        if(greatest_no<a[i])
            greatest_no=a[i];
    }
    printf("greatest no is %d", greatest_no);
}
/*----------------------------------------------------------------------------------------------------------------------*/

// Q.5) Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], i, min=100000;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    
    for(i=0; i<=9; i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("smallest no. is %d", min);
    return 0;
}
/*----------------------------------------------------------------------------------------------------------------------*/

// Q.6) Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], i, j, temp;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<=9; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for(i=0; i<=9; i++)
        printf("%d ", a[i]);
    return 0;
}
/*----------------------------------------------------------------------------------------------------------------------*/

// Q.7) Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], i, max=-1, s_max=0;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    for(i=0; i<=9; i++)
    {
        if(a[i]>max)
        {
            s_max=max;
            max=a[i];
        }
        else
        {
            if(a[i]>s_max)
                s_max=a[i];
        }
    }
    printf("second largest is %d", s_max);
    return 0;
}
/*----------------------------------------------------------------------------------------------------------------------*/

// Q.8) Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], i, smallest=999999, s_smallest;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    for(i=0; i<=9; i++)
    {
        if(a[i]<smallest)
        {
            s_smallest=smallest;
            smallest=a[i];
        }
        else
        {
            if(a[i]<s_smallest)
                s_smallest=a[i];
        }
    }
    printf("second smallest no = %d", s_smallest);
    return 0;
}
/*----------------------------------------------------------------------------------------------------------------------*/

// Q.9) Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], i;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    for(i=9; i>=0; i--)
        printf("%d ", a[i]);
    return 0;
}
/*----------------------------------------------------------------------------------------------------------------------*/

// Q.10) Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10], b[10], i;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    printf("Copied array is:\n");
    for(i=0; i<=9; i++)
    {
        b[i]=a[i];
        printf("%d ", b[i]);
    }
    return 0;
}
