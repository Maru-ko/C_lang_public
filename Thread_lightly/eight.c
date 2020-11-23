/*

Concurrency
Parallelism
Thread Safety

MUST lookout for Thread SAFETY

idx+++;
 - reads the variable
 - adds one to the variable
 - writes the new back into the original location in memory

int tmp = idx;
idx = tmp+1;

depending on how the threads line up, each thread can read the same value
increment it, write the same value back (thus incrementing value by 1)
overlap computes wrong result

RACE CONDITION - threads are racing

first we fix the corrected, then concern with speed
We make it ATOMIC (though as one unit)
It makes our code fragile

LOCKS - Mutex Locks (mutual exclusion locks)

code is much slower!

Concurrency & Parallelism
if 2 processes are working in parralel they are working at the same time (multiple cores/ co processor)

Concurrency - if one core - runs one thread for a bit, then runs another, and switches, thus making it slower yet concurrent

MEMORY SHARING - OS might stick both on the same core, with locks you have lock and unlock and overhead is considerable

What's the point? adds safety issues and slows everything down

Threads are useful for building user interaces - want them to be responsive
code should respond quickly when a user does something
mouse click responses slow down or keystroke responses, do some heavy lifting in another thread

If you don't need threads, leave them out.
*/
#include <stdio.h>
#include <stdint.h>
#include <pthread.h>

#define BIG 1000000000UL
uint32_t counter = 0;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void * count_to_big(void *arg) {
    for (uint32_t idx=0; idx < BIG; idx++) {
        pthread_mutex_lock(&lock); //second thread will wait
        counter++;
        pthread_mutex_unlock(&lock); //lock is released here
    }
    return NULL;
}

int main()
{
    pthread_t t;
    pthread_create(&t, NULL, count_to_big, NULL);
    count_to_big(NULL);
    pthread_join(t, NULL);
    printf("Done. Counter = %u\n", counter);
}
