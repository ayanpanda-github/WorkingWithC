#include <stdio.h>

int main(void){
    int x;
    int y;
    printf("What are the two numbers? ");
    scanf("%d %d", &x, &y); // Read user input %d - format specifier for integers
    if (x>y){
        printf("%d is greater than %d\n", x, y);
    }
    else  if(x<y){
        printf("%d is greater than %d\n", y,x);

    } else {
        printf("%d is equal to %d\n", x, y);
    }
}