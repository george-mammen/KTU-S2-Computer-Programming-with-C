#include <stdio.h>
int main()
{
    int rn,i;
    float mark1,mark2,mark3;
    FILE* f= fopen("Marks.txt","w");
    for(i=1 ; i<=20;i++)
    {
        printf("Enter the roll number and  3 marks of those students");
        scanf("%d%f%f%f",&rn,&mark1,&mark2,&mark3);
        fprintf(f,"%d %.3f %.3f %.3f\n", i , mark1, mark2,mark3);
    }
    fclose(f);
    FILE* in= fopen("Marks.txt", "r");
    FILE* out= fopen("Total.txt", "w");
    for(i=1 ; i<=20;i++)
    {
        fscanf(in,"%d%f%f%f",&rn,&mark1,&mark2,&mark3);
        fprintf(out,"%d %.2f\n",rn,mark1+mark2+mark3);
    }
    
}