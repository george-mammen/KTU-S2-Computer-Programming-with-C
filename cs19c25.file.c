#include <stdio.h>

struct student{
    char adn[10];
    char rn[10];
    char name[26];
    char sex[1];
}stud;

int main( )
{
    FILE *f= fopen("s2c.hl", "rb");
    while(!feof(f)){
          fread ( &stud, sizeof (stud),1,f);
      printf("%s %s\n", stud.rn, stud.name);   
    }
    return 0;
}