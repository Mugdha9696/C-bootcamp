//Q.1)
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*--------------------------------------------------------------------*/

//Q.2)
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*----------------------------------------------------------------------*/

//Q.3)
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*-----------------------------------------------------------------------*/

//Q.4)
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*------------------------------------------------------------------------*/

// Q.5)
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*-----------------------------------------------------------------------*/

// Q.6)
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=i && j<=10-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*-----------------------------------------------------------------------*/

// Q.7)
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=10; j++)
        {
            if(j<=6-i)
                printf("*");
            else if(j>=i+5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*-----------------------------------------------------------------------*/

// Q.8)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d", k);
                if(j>=4)
                    k--;
                else
                    k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*-------------------------------------------------------------*/

// Q.9)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%d", k);
                if(j<4)
                    k++;
                else
                    k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*-------------------------------------------------------------------*/

// Q.10)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7; j++)
        {
            if(j<=5-i)
            {
                printf("%d", k);
                if(k<4)
                    k++;
            }
            else if(j>=3+i)
            {
                k--;
                printf("%d", k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*----------------------------------------------------------------------*/

// Q.11)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        k='A';
        for(j=1; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c", k);
                if(j<5)
                    k++;
                else
                    k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*------------------------------------------------------------*/

// Q.12)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        k='A';
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c", k);
                if(j<4)
                    k++;
                else
                    k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*----------------------------------------------------------*/

// Q.13)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=7; i++)
    {
        k='A';
        for(j=1; j<=13; j++)
        {
            if(j<=8-i)
            {
                printf("%c", k);
                if(j<7)
                    k++;
            }
            else if(j>=6+i)
            {
                k--;
                printf("%c", k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*----------------------------------------------------------*/

// Q.14)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j==1)
                printf("*");
            else if(j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(k=1; k<=5; k++)
        printf("*");
    return 0;
}
/*----------------------------------------------------------*/

// Q.15)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j>=6-i)
            {
                if(j==6-i)
                    printf("*");
                else if(j==5)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    for(k=1; k<=5; k++)
        printf("*");
    return 0;
}
/*----------------------------------------------------------*/

// Q.16)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(j==6-i)
                    printf("*");
                else if(j==4+i)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    for(k=1; k<=9; k++)
        printf("*");
    return 0;
}
/*----------------------------------------------------------*/

// Q.17)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(k=1; k<=9; k++)
    {
        printf("*");
    }
    printf("\n");
    for(i=2; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=i)
            {
                if(j==i)
                    printf("*");
                else if(j==10-i)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*-------------------------------------------------------------*/

// Q.18)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    for(k=1; k<=4; k++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=k+1 && j<=9-k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*--------------------------------------------------------------------------*/

// Q.19)
#include<stdio.h>
int main()
{
    int i, j, k;
    for(k=1; k<=3; k++)
    {
        for(j=1; j<=19; j++)
        {
            if(j>=4-k && j<=6+k)
                printf("*");
            else if(j>=14-k && j<=16+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=1; i<=1; i++)
    {
        for(j=1; j<=19; j++)
        {
            if(j<=6)
                printf("*");
            else if(j>=13)
                printf("*");
            else
            {
                if(j==7) printf("M");
                if(j==8) printf("y");
                if(j==9) printf("S");
                if(j==10) printf("i");
                if(j==11) printf("r");
                if(j==12) printf("G");
            }
        }
        printf("\n");
    }
    for(i=2; i<=10; i++)
    {
        for(j=1; j<=19; j++)
        {
            if(j>=i && j<=20-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
