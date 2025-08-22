#include <stdio.h>
int ger_size(void);

int main(void){

    int n =  get_size();

    

    for(int i = 0; i< n ; i++){
        for (int j = 0 ; j<n ; j++){
            printf("#");
        }
        printf("\n");
    }
    //printf("\n");
}

    
int get_size(void){
    int n;
    do {
        printf("height: ");
        scanf("%d", &n);
    }while (n<1);
    return n;

}
