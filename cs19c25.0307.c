// Name:George Mammen
// Roll Number:25

#include <stdio.h>
#include<string.h>

int main(void)
{
  char str[100];
  int a=0,e=0,i=0,o=0,u=0,n;
  printf ("Enter the string :"); 
  scanf ("%s",&str);
  n=strlen(str);
  

  for(int j=0;j<n;j++)
  {
    switch(str[j])
    {
        case'a':a++; 
                break;
        case'A':a++; 
                break;
        case'e':e++; 
                break;
        case'E':e++; 
                break;
        case'i':i++; 
                break;                        
        case'I':i++; 
                break;          
        case'o':o++; 
                break;          
        case'O':o++; 
                break;          
        case'u':u++; 
                break;          
        case'U':u++; 
                break;          
      }
    }             
  
  printf("Count for vowel a =%d",a);
  printf("Count for vowel e =%d",e);
  printf("Count for vowel i =%d",i);
  printf("Count for vowel o =%d",o);
  printf("Count for vowel u =%d",u);  

  return 0;
 }
