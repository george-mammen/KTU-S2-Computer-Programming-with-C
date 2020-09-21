// Name : George Mammen
/* 
Let r be your roll number (an integer between 1 and 62)
Perform the following computations using a C program
r1 ← (r + 10)2 + 999
if r is odd
. r ← first two digits of r1
else
. r ← last two digits of r1
if (r < 10)
. r+ ← 10
let d3 ← r%3
let d4 ← r%4
Display r, d3, and d4 */

#include<stdio.h>

int main()
{
    int r=25,r1,temp,d3,d4;
    r1=(r+10)*(r+10)+999;
    temp=r1;
    if(r%2!=0)
    {
        while(temp>=100)
        {
            temp=temp/10;
        }
        r=temp;
    }
    else
        r=r1%100;
    
    if(r<10)
        r+=10;
    
    d3=r%3;
    d4=r%4;
    
    printf("r=%d d3=%d d4=%d",r,d3,d4);
    
}
