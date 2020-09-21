// Name:George Mammen

/* Question:
 Write a C Program to read and print the marks of 'r' students and calculate their sessional marks using functions.  
 Use function readmarks to read the marks of students under the heads of two Assignments and two Tests conducted and marks obtained for attendance into a 2D Array 
 Use function printmarks to print the entered marks under their corresponding heads
 Use function computesess to calculate the sessional marks using a specified criteria */
 #include <stdio.h>

readmarks(float M[64][10],int r,int c)
{	
	int i,j;
	for(i=0;i<r;i++)
	{	
		M[i][0]=i;
		printf("Enter marks of student %d: ",i);
		for (j=1;j<c;j++)
			scanf("%f",&M[i][j]); // Read the elements of the array
	}
}

printmarks(float M[64][10],int r,int c)
{	
	int i, j;
	printf("\nR\tA1\tA2\tT1\tT2\tA\tS\n");
	printf("-----------------------------------");
	printf("-----------------\n");
	for (i=0;i<r;i++, printf("\n"))
		for (j=0; j<c; j++)
			printf("%.2g\t",M[i][j]); //Printing the marks under the various heads
	printf("-----------------------------------");
	printf("-----------------\n\n");
}

computesess(float M[64][10], int r, int c)
{	
	int i, j;
	for (i=0; i<r; i++)
		M[i][c]  = M[i][1]*7.5/M[0][1],
		M[i][c] += M[i][2]*7.5/M[0][2],// Computing the assignment marks bit of the sessional mark with a criteria 
 		M[i][c] += M[i][3]*12.5/M[0][3],
		M[i][c] += M[i][4]*12.5/M[0][4],// Computing the exam marks bit of the sessional mark with a criteria
		M[i][c] += M[i][5];	 // Adding the attendance mark to the sessional mark	
}

main()
{	
	float Marks[64][10];
	int r, c=6;
	printf("Enter number of students: ");
	scanf("%d",&r);
	r++;
	readmarks(Marks,r,c);
	printmarks(Marks,r,c);
	computesess(Marks,r,c);
	printmarks(Marks,r,c+1);
}
