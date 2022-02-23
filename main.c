#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printArr( uint8_t *parr, uint8_t size);


int main(void)
{
    uint8_t arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13,14,15};

    printArr(  &arr[0] , sizeof(arr)/sizeof(uint8_t));

    return EXIT_SUCCESS;
}
/*
void printArr( uint8_t *parr, uint8_t size){
    for (uint8_t counter = 0; counter < size; counter = counter + 1)
    {
        printf("arr[%d]: %d\n", counter, parr[counter]);
    }
}
*/

void printArr( uint8_t *parr, uint8_t size){
    for (uint8_t counter = 0; counter < size; counter = counter + 1)
    {
        printf("arr[%d]: %d\n", counter, *(parr + counter)  );
    }
}