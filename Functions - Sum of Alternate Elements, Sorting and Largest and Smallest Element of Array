/* 
Find the sum of alternate elements of an array. Return this sum. From main() print the array and the
sum.Sort the array. The function shall return the sorted result as another array. The original array should not
be modified. From the main() print both the arrays.Find the largest and smallest elements of the array without sorting. Store these two values into another
array of size two. Return this array. From the main() print the array and the results. */

#include<stdio.h>

int sumalt(int arr[10])
{
    int sum=0;
    for(int i=0;i<5;i=i+2)
    {
        sum=sum+arr[i]; 
    }
    return sum;
}
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

int *slarr(int arr[10])
{ 
     int high,low;
     arr[0]=high=low;
     for(int i=0;i<10;i++)
     {
        if(arr[i]>high)
            high=arr[i];
        else if(arr[i]<low)
            low=arr[i];        
     }
  int result[2];
  high=result[1];
  low=result[2];
  return result;
  }


int main(){
    int arr[10]={13,3,45,43,78,23,65,29,30,2},i=0;
    int sum;
    int *p;

    printf("\n Array= ");
    for(i;i<10;i++)
    {
        printf("%d,",arr[i]);
    }
    sortarr(arr);

    sum=sumalt(arr);
    printf("\n Sum of alternate elements:%d",sum);
    p=slarr(arr);
    printf("\n Largest :%d \n Smallest :%d",p[1],p[2]);
}
