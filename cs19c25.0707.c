// Name:George Mammen
// Roll Number:25

#include <stdio.h>
#include <math.h>
#include <string.h>

int pow(int a,int b)
{
    if(b==0)
        return 1;
      
    return (a*pow(a,b-1));
}

void main()
{
    int a,n,i,res;
    printf("Enter the value for x :");
    scanf("%d", &x);
    printf("Enter the degree :");
    scanf("%d", &n);
     
    for(int i=n;i>=0;i--)
    {
        printf("Enter coefficients of the polynomial for the %dth power:",i);
		scanf("%d",&a);
	    result +=(a*pow(x,i));
	}
    printf("\n %d",res);
}