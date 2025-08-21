#include <stdio.h>

int main(void){
    char response; // Variable to hold user response since we are only expecting a single character
    printf("do you agree? (y/n)  ");
    scanf("%c", &response);
    if (response == 'y' || response == 'Y'){
        printf("Agreed.\n");
    }else if (response == 'n' || response == 'N'){
        printf("disagreed.\n");
    }
}
