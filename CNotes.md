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
```c
 scanf("%d %d", &x, &y); // Read user input %d - format specifier for integers
 ```


 || -> or 
 && -> and

 ## loops 

 # for loop 
 ```c
 for (counter = 0; counter < 4 ; counter += 1){
        printf("meow!\n");
    }
```
# while loop
```
while (counter > 0){
        printf("meow!\n");
        counter--;
}
```

# do while loop
``` c
do {
        printf("height: ");
        scanf("%d", &n);
    } while (n<1);

```



