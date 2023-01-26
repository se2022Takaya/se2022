#include <stdio.h>

int main(void){
    for(int i=0;i<10;i++){
        if(i == 5){
            printf("i is just 5\n");
        }else if(i > 5){
            printf("i is bigger than 5\n");
        }else{
        printf("i is smaller than 5\n");
    }
    
    return 0;
    }
}