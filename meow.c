#include <stdio.h>


int main(void){
    int counter = 0;
    for (counter = 0; counter < 4 ; counter += 1){
        printf("meow!\n");
    }
    
    counter = 4;
    
    while (counter > 0){
        printf("meow!\n");
        counter--;
    }
    return 0;
}