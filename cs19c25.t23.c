// Name : George Mammen
// Roll No: 25
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char std[250];
   
    FILE *fin = fopen("list.txt", "r");
    FILE *fout = fopen("list.25", "wb");

    fseek(fin,70,SEEK_SET);

    for (int i=1;i<=7;i++)
    {
        fscanf(fin,"%d %d %d %d",&stud.rollno,&stud.m1,&stud.m2,&stud.m3);
        fwrite(&stud,sizeof(stud),1,fout);
    }

    fclose(fin);
    fclose(fout);