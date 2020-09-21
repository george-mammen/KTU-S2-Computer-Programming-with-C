// Name:George Mammen
// Roll Number:25
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