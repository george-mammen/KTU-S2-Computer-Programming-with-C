// George Mammen
// Roll Number: 25
#include <stdio.h>

struct student
{
    char admno[10];
    char rollno[10];
    char name[26];
    char gender[1];
}stud;

int main()
{
    FILE *fin = fopen("s2c.hl","rb");
    const int rn=25;

fseek(fin,(rn-6)*sizeof(stud),SEEK_SET);
    for(int i = 0;i<=10; i++)
    {
       fread(&stud,sizeof(stud),1,fin);
        if(i!=5)
        printf("%s %s %s %s\n",stud.admno,stud.rollno,stud.name,stud.gender);
    }
    return 0;
}