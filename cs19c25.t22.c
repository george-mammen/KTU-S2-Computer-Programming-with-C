// Name : George Mammen
// Roll No: 25

#include<stdio.h>

int sortarr(int arr[10])
{
    int n=10,temp;
    int i,j;  
    for(i=0;i<n-1;i++) 
    {  
        for(j=0;j<n-i-1;j++)  
            if(arr[j]>arr[j+1])
            {  
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
    printf("\n Sorted Array = ");
    for(i=0;i<10;i++)
    {
        printf("%d,",arr[i]);
    }
}

int main(){
    int arr[10]={13,3,45,43,78,23,65,29,30,2},i=0;
        
    printf("\n Unsorted Array= ");
    for(i;i<10;i++)
    {
        printf("%d, ",arr[i]);
    }
    sortarr(arr);
}
