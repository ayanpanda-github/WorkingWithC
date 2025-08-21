### General C notes 
## Evaluate the quality of code

1. is the codes does what it spoused to do correctness
2. design 
3. Style 

#include <stdio.h>  


## input in c  
# `// standard input/output library <Header> `

```c
char name[100]; // Array to hold the name, size 100 characters
printf("What's your name? "); // Prompt user for input
scanf("%99s", name); // Read user input "%99s" - up to 99 characters
printf("Hello, %s\n", name); // %s - format specifier for strings // %% = escape sequence for literal %
```
