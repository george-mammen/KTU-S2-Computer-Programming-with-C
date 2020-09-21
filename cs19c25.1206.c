// Roll No- 25
// Name - George Mammen

#include <stdio.h>

struct student{
    char admno[7];
    char rollno[10];
    char name[30];
    char gender[1];
}stud;

int main( )
{
    FILE *fin= fopen("s2c.hl", "rb");
    while(!feof(fin)){
          fread ( &stud, sizeof (stud),1,fin);
      printf("%s %s\n", stud.rollno, stud.name);   
    }
    return 0;
}