// Name:George Mammen
/* Question Write this program without using any conditional or loop statement.
Using gets read your name into a string variable myname.
Determine len = length of the input using relevant string function. Print it.
Note this number and calculate manually k = len % 6

 if k==0 Concatenate ”My name is: ” in front of myname. Then print it using puts.
 if k==1 Concatenate ” : is My name \n” at the end of myname. Then print it using printf.
 if k==2 Copy myname to another variable and print it using puts.
 if k==3 Copy myname to another variable and print it using printf.
 if k==4 Concatenate ”My name is: ” in front of myname. Then print it using printf.
 if k==5 Concatenate ” : is My name \n” at the end of myname. Then print it using puts */

/* Task :Write this program for all the 62 students using a loop.
From the given file using fgets or any suitable file reading technique, read the  name into a string variable studname.
Determine the  length of studname using relevant string function. Print it.

Do the following works and print the results with appropriate headings/captions.

Concatenate ”The name is: ” in front of studname. Then print it using puts, and printf on different lines.
Concatenate ” : is the name \n” at the end of studname. Then print it using printf and puts on different lines.
Copy studname to another variable  and print it using puts, and printf  on different lines Roll */


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
