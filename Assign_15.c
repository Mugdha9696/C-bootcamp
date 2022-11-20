// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest_no(int b[]);
int main()
{
    int a[10], i, g;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    g = greatest_no(a);
    printf("greatest no. is %d", g);
    return 0;
}
int greatest_no(int b[])
{
    int i, max=-1;
    for(i=0; i<=9; i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    return max;
}
/*-----------------------------------------------------------------------------------------------------*/

// Q.2) Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest_no(int b[]);
int main()
{
    int s;
    int a[10]={12, 34, 4, 5, 6, 11, 7, 8, 9, 10};
    s=smallest_no(a);
    printf("smallest no is %d", s);
    return 0;
}
int smallest_no(int b[])
{
    int i, min=999999;
    for(i=0; i<=9; i++)
    {
        if(b[i]<min)
            min=b[i];
    }
    return min;
}
/*-----------------------------------------------------------------------------------------------------*/

// Q.3) Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int* sort(int b[]);
int main()
{
    int a[10], i;
    int *c;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    c=sort(a);
    for(i=0; i<=9; i++)
        printf("%d ", c[i]);
    return 0;
}
int* sort(int b[])
{
    int i, j, temp;
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<=9; j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    return b;
}
/*-----------------------------------------------------------------------------------------------------*/

/* Q.4) Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right.
(For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

#include<stdio.h>
void rotate(int a[], int n, int d);
int main()
{
    int n, d;
    int a[5]={32,29,40,12,70};
    printf("Enter the value for n: ");
    scanf("%d", &n);
    printf("Enter\n'1' for left\n'2' for right\n");
    scanf("%d", &d);
    rotate(a, n, d);
}
void rotate(int a[], int n, int d)
{
    int i, k, temp, b[5];
    if(d==1){
        for(k=0; k<n; k++)
        {
            temp=a[0];
            for(i=0; i<4; i++)
                a[i]=a[i+1];
            a[4]=temp;
        }
    }
    else{
        for(k=0; k<n; k++)
        {
            for(i=0; i<=4; i++)
                b[i]=a[i];
            for(i=0; i<4; i++)
                a[i+1]=b[i];
            a[0]=b[4];
        }
    }
    for(i=0; i<=4; i++)
        printf("%d ", a[i]);
}
/*-----------------------------------------------------------------------------------------------------*/

// Q.5) Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include<stdio.h>
int adjacent(int b[]);
int main()
{
    int a[8]={1, 2, 3, 3, 4, 2, 1, 1}, v;
    v=adjacent(a);
    printf("Value of that 1st adjacent duplicate element is: %d", v);
}
int adjacent(int b[])
{
    int i;
    for(i=0; i<7; i++)
    {
        if(b[i]==b[i+1])
            return b[i];
    }
}
/*-----------------------------------------------------------------------------------------------------*/

// 6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void reverse(int b[]);
int main()
{
    int a[10], i;
    printf("Enter 10 no.s: ");
    for(i=0; i<=9; i++)
        scanf("%d", &a[i]);
    reverse(a);
}
void reverse(int b[])
{
    int i;
    for(i=9; i>=0; i--)
        printf("%d ", b[i]);
}
/*-----------------------------------------------------------------------------------------------------*/

// Q.7) Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int count_duplicates(int a[]);
int main()
{
    int c;
    int a[9]={1,2,4,2,1,5,6,5,4};
    c=count_duplicates(a);
    printf("Total no. of duplicate elements = %d", c);
    return 0;
}
int count_duplicates(int a[])
{
    int i, j, count = 0;
    for(i=0; i<8; i++)
    {
        for(j=i+1; j<=8; j++)
        {
            if(a[i]==a[j])
                count+=1;
        }
    }
    return count;
}
/*-----------------------------------------------------------------------------------------------------*/

// Q.8) Write a function in C to print all unique elements in an array.
#include<stdio.h>
void print_uniques(int b[]);
int main()
{
    int a[]={1,2,3,5,2,3,6,4};
    print_uniques(a);
    return 0;
}
void print_uniques(int b[])
{
    int i, j, flag=0;
    for(i=0; i<=7; i++)
    {
        flag=0;
        for(j=0; j<=7; j++)
        {
            if(j==i)
                continue;
            if(b[i]==b[j])
                flag=1;
        }
        if(flag==0)
            printf("%d ", b[i]);
    }
}
/*-----------------------------------------------------------------------------------------------------*/

// Q.9) Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
void merge(int p[], int q[]);
int main()
{
    int a[5], b[5], i;
    printf("Enter 5 no.s for array 1: ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("Enter 5 no.s for array 2: ");
    for(i=0; i<5; i++)
        scanf("%d", &b[i]);
    merge(a, b);
}
void merge(int p[], int q[])
{
    int c[10], i, j, temp;
    for(i=0; i<5; i++)
        c[i]=p[i];
    for(i=5; i<=9; i++)
    {
        c[i]=q[i-5];
    }
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<=9; j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(i=0; i<=9; i++)
        printf("%d ", c[i]);
}
/*-----------------------------------------------------------------------------------------------------*/

//Q.10) Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void count(int b[])
{
    int c[10]={0,0,0,0,0,0,0,0,0,0}, i=0, j;
    for(i=0; i<=9; i++)
    {
        for(j=0; j<=9; j++)
        {
            if(b[i]==j)
            {
                c[j]+=1;
                break;
            }
        }
    }
    printf("Thus the frequency table of given array is:\n");
    for(i=0; i<=9; i++)
        printf("%d ", c[i]);
}
int main()
{
    int a[]={1,4,3,3,6,2,4,5,1};
    count(a);
    return 0;
}
