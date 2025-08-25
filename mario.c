#include <stdio.h>

int get_size(void){
    int n;
    do {
        printf("height: ");
        scanf("%d", &n);
    }while (n<1);
    return n;
}

void print_grid(int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            printf("#");
        }
        printf("\n");
    }
}

int main(void){
    int n =  get_size();
    print_grid(n); 
}

    

