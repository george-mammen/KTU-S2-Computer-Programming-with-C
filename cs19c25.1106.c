//George Mammen
// Roll Number :42

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char admno[10];
    char rollno[10];
    char name[26];
    char gender[1];
} stud;

int main()
{
    char std[200];

    FILE *fout;
    FILE *fin = fopen("s2c.hl.txt", "r");
    fout = fopen("s2c.hl", "wb");

    char sno[5]; 

    while((fgets(std,sizeof(std),fin)))
    {
        sscanf(std,"%s %s %9[^\t] %25[^\t] %s",sno,stud.admno,stud.rollno,stud.name,stud.gender);
        fwrite(&stud,sizeof(stud),1,fout);
    }
    return 0;
}