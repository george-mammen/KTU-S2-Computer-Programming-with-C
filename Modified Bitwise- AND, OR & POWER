// Name:George Mammen
/* Calculate and print the following values for all the  student of your class.

Let RN be the roll number 
Let R be RN + 30
N = R %10; if (N < 4) then N += 5

Separate the digits of R as x and y using appropriate C statements.
Perform bit wise operations (i) AND (ii) OR with x and y.
Compute x*4 using bit wise operation. */

/* Let R be your roll number + 30
N = R %10; if (N < 4) then N += 5 */

Print RN, R, N, x, y, result of AND, result of OR, and x*4 as computed above row-wise per student
#include<stdio.h>
int main()
{
    int R,RN,N,x,y;
    R=RN+30;
       
    for(R=31;R<=92;R++)
    {
        N=R%10;
        if(N<4)
        {
    	    N+=5;
        }

        x=R/10;
        y=R%10;
        printf("\n RN=%d,N=%d",R-30,N);
        printf("\n r=%d, x=%d, y=%d",R,x,y);
        printf("\n AND = %d", x&y);
        printf("\n OR = %d", x|y);
        printf("\n x*4 = %d \n \n ",x<<2);
    }
}
