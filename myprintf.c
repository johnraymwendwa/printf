#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int myprintf(char* string, ...);

/* Main function */
int main (void)
{
char* text = "This is a custom function";
myprintf(text);

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
*Implement variable arguments
*Link arguments to C data types
*convert other datatypes to strings for print prep
*return said string to myprintf
*compile and write chars to stdout
*/