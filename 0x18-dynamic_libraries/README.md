
# AUTHOR : Kevin Kipkoech

0x18. C - Dynamic libraries
# Low level Programming - C

The tasks of this project about Static and Dynamic libraries. Creating Dynamic libraries on Linux, how it works and how to use it.
The difference between static and dynamic libraries(Shared libraries)

# ## Requirements 
# # C
	Allowed editors: vi, vim, emacs

# #Bash
	Allowed editors: vi, vim, emacs


# Tasks

# 0. A library is not a luxury but one of the necessities of life
	The task was to create a dynamic library libdynamic.so containing 	all the functions listed below.
		int _putchar(char c);
		int _islower(int c);
		int _isalpha(int c);
		int _abs(int n);
		int _isupper(int c);
		int _isdigit(int c);
		int _strlen(char *s);
		void _puts(char *s);
		char *_strcpy(char *dest, char *src);
		int _atoi(char *s);
		char *_strcat(char *dest, char *src);
		char *_strncat(char *dest, char *src, int n);
		char *_strncpy(char *dest, char *src, int n);
		int _strcmp(char *s1, char *s2);
		char *_memset(char *s, char b, unsigned int n);
		char *_memcpy(char *dest, char *src, unsigned int n);
		char *_strchr(char *s, char c);
		unsigned int _strspn(char *s, char *accept);
		char *_strpbrk(char *s, char *accept);
		char *_strstr(char *haystack, char *needle);

	The main.h header file contains the function declarations.
	How?
		1. Create a source file for each function:
			The source files was available in the other dir. It
			was just cp'ing  them to the current dir.
		2. Compile each source file into object file:
			
			gcc -fPIC -c *.c
		3. Create the dynamic library:
			gcc -o <filename> *.o
	
# 1. Without libraries what have we? We have no past and no future
	The task was to create a script that creates a dynamic library 	called liball.so from all the .c files that are in the current dir.
		
		export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

