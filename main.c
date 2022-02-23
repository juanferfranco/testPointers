#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void){

    uint8_t arr[] = {1,2,3,4,5,6,7,8,9,10};

    uint8_t counter = 0;

    while( counter < 10){
        printf("arr[%d]: %d\n", counter, arr[counter]);
        counter = counter + 1;
    }

    return EXIT_SUCCESS;
}

