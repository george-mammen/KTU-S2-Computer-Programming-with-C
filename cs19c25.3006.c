// Name:George Mammen
// Roll Number:25
// Name:George Mammen
// Roll Number:25
#include<stdio.h>
void main()
{

    int a[5][3];
    
    for(int i=0;i<=4;i++)
    {
        a[i][0]=201+i;
        scanf("%d %d %d",&a[i][1],&a[i][2],&a[i][3]);
        }
    	
    int  max= a[0][1];
    for(int i=1;i<=4;i++)
        if(max<a[i][1])
       	    max=a[i][1];
       	    
       
    for(int i=0;i<=4;i++)
        if(a[i][1]==max)
            printf("highest marks:%d.   %d   %d   %d \n",a[i][0],a[i][1],a[i][2],a[i][3]);
         
           
     printf("Students with more than 45 in atleast 1\n");
     for(int i=0;i<=4;i++){
         if(a[i][1]>=45 || a[i][2]>=45 || a[i][3]>=45)
             printf("%d. %d %d %d \n", a[i][0], a[i][1], a[i][2], a[i][3]);
         }
        
         
         
         printf(" Details Roll No:%d   1 %d   2 %d   3 %d   total %d", a[1][0],a[1][1],a[1][2],a[1][3],a[1][1]+a[1][2]+a[1][3]); 
}