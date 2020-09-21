// Name:George Mammen
/*Manually create a data file as a text file named cs19cxx.3006.txt with four fields (Register number, mark 1, mark 2, mark 3 separated by space or tab with one line per student) of 10 students. Register numbers are to be consecutive numbers starting from 201.

Write a C program to do the following tasks. Write the code well indented and with enough remarks.

(a) Print a prompt message and accept the roll number RN  in the range 1 to 62.
If the input is not proper exit with a message.
Let R = RN + 30
N = R %10; if (N < 4) then N += 5

(b)Then create a 2D array representing register number, mark 1, mark 2, mark 3 of N students by reading the data from the data file using fscanf().
Print the data with appropriate headings. Do the rest of the code using this array.

(c) In the code calculate : k = R % 3 + 1
Print all the details of the students who have scored highest in exam k (i.e mark k)

(d) Print all the details of the students who have scored ≥ 45 marks in at least one exam

(e) In the code calculate , regno = R % N + 201
Print the details and total marks of the student with register number regno*/

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
