// Name:George Mammen
// Roll Number:25
#include<stdio.h>
#include<string.h>
int main()
{
    int len, k;
    char myname[20], string[100];
    printf("Enter your name");
    gets(myname);
    len = strlen(myname);
    k = len%6;
    
    switch(k){
        case 0: strcpy(string,"My name is:");
                strcat(string,myname);
                puts(string);
                break;
        case 1: strcpy(string,": is My name \n");
                strcat(myname,string);
                printf("%s",myname);
                break;
        case 2: strcpy(myname,string);
                puts(string);
                break;
        case 3: strcpy(myname,string);
                printf("%s",string);
                break;
        case 4: strcpy(string,"My name is:");
                strcat(string,myname);
                printf("%s",string);
                break;
        case 5: strcpy(string,": is My name \n");
                strcat(myname,string);
                puts(string);
                break;
    }
    
}
