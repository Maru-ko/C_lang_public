/*

Concurrency
Parallelism
Thread Safety


*/
#include <stdio.h>
#include <stdint.h>
#include <pthread.h>

#define BIG 1000000000UL
uint32_t counter = 0;

void count_to_big() {
    for (uint32_t idx=0; idx < BIG; idx++) {
        counter++;
    }
}

int main()
{
    count_to_big();
    count_to_big();
    printf("Done. Counter = %u\n", counter);
}
