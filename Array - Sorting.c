// Name : George Mammen
/* Sort an array. The function shall return the sorted result as another array. The original array should not
be modified. From the main() print both the arrays.*/

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
