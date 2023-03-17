#include <stdio.h>                            	 

/**
*main - print the main string in the put function
*
*Description: using the main function
*this programe will orint "the size of various types on the computer it is compiled and run on.

*Return 0
*/
int main(void)
{
    	char c;
    	int i;
    	long li;
    	long long lli;
    	float f;

    	Printf ("size of a char: %id byte(s)\n", sizeof(c));
    	Printf ("size of an int: %id byte(s)\n", sizeof(i));
    	Printf ("size of a long int: %id byte(s)\n", sizeof(li));
    	Printf ("size of a long long int: %id byte(s)\n", sizeof(lli);
    	Printf ("size of a float: %id byte(s)\n", sizeof(f));
    	return (0);
}
