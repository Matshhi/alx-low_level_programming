	/* 4-puts.c: This is my first C program */
	#include <stdio.h>
	puts() {
		const char* message = "Programming is like building a multilingual puzzle"\n;
		write(STDOUT_FILENO, message, sizeof(message)-1);
		return 0;
	}
