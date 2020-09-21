// Name:George Mammen
/* Create a 2D array representing roll number, mark 1, mark 2, mark 3 of N students. Use N calculated as
suggested at the beginning of the question paper.
Roll numbers are to be computed starting from 201 consecutively. Marks are to be read using scanf from
keyboard input.
Do not read N or roll numbers via scanf.
Print the data with appropriate headings.
(a) Calculate manually: k = R % 3 + 1
Print all the details of the students who have scored highest in exam k
(b) Print all the details of the students who have scored ≥ 45 marks in at least one exam
(c) Calculate manually, rn = R % N + 201
Print the details and total marks of the student with roll number rn */

/* Finding R & N:
Let R be your roll number + 30
N = R %10; if (N < 4) then N += 5 */




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
