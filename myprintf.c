#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int myprintf(char* string, ...);

/* Main function */
int main (void)
{
    int i;
    char* text[5];
    text[0] = "test 0";
    text[1] = "This is test 1";
    text[2] = "Test 2";
    text[3] = "test 3";
    text[4] = "END";
    i = 0;

    while (i != 5)
    {
        printf("%d\n",i);
        myprintf(text[i]);
        printf(text[i]);
        i++;

    }

}

/* Myprintf function */
int myprintf(char* string, ...)
{

int i = 0;
int count = 0;
int value = 0;

/*Error support for null pointers*/
if (string == NULL)
{
    return (0);
    printf("Error: NULL found\n");
}

/*Writing of chars to stdout*/
while (string[i] != '\0')
{
    if (string[i] != '%')
    {
        value += write(1,&string[i],1);
        i++;        
    }
}
printf("\n");

}

//TO-DO

/*
*add a check specifier
*Implement variable arguments and store in array
*Link arguments to C data types
*convert other datatypes to strings for print prep
*return said string to myprintf
*compile and write chars to stdout
*/