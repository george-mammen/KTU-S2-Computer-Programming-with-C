//Name: George Mammen
//Roll No:25
#include<stdio.h>
int i=0;

int* a(int n)
{
	static int ar1[100];
	printf("\n Enter the elements of array");
	for(i=0;i<n;i++)
		scanf("%d ",&ar1[i]);
	return ar1;
}

void b(int *ar1,int n)
{
	for(i=0;i<n;i++)
		printf(" \n %d ",ar1[i]);
}

int* c(int *ar1,int n)
{
	static int ar2[100];
	for(i=0;i<n;i++)
		ar2[i]=ar1[i];
	
	for(i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
			if(ar2[j]>ar2[j+1])
			{
				int temp=ar2[j];
				ar2[j]=ar2[j+1];
				ar2[j+1]=temp;
			}
	return (ar2);		
}

int main(int argc, char *argv[])
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    int* ar1=a(n);
    b(ar1,n);
    int* ar2=c(ar1,n);
    printf(" \n Unsorted Array : ");
    b(ar1,n);
    printf("\n Sorted Array: ");
    b(ar2,n);
    return 0;
}
	
	
	
	
	
	
	
	
	
	
	