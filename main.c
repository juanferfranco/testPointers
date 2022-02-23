#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{

    uint8_t arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (uint8_t counter = 0; counter < 10; counter = counter + 1)
    {
        printf("arr[%d]: %d\n", counter, arr[counter]);
    }

    return EXIT_SUCCESS;
}
