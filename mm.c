#include <stdio.h>
#include <stdlib.h>

#define SIZE 16

/* Initialized data. */
int i = 7;

/* Uninitialized data, should be 0 or NULL. */
char *ui;


int main (int argc, char **argv)
{
		printf ("Address of uninitialized data: \t%p\n", &ui);		
		printf ("Address of initialized data: \t%p\n", &i);

		/* Runtime. */
		char *rt = (char *) malloc (SIZE * sizeof(char));	
		printf ("Address of runtime data: \t%p\n", rt);	

		/* Stack local variable. */
		int loc = 1;
		printf ("Address of stack local: \t%p\n", &loc);

		/* Shared c library. */
		size_t lib = sizeof(char);
		printf ("Address of library call: \t%p\n", &lib);

		pause();

		free (rt);
		return 0;
}
