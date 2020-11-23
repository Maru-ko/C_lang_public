/*

fork to clone one process into two process
1. concurrency - different processes doing two different things same time
2. isolation - memory is separate, if one crashes the other is fine

threads is concurrency without isolation - 
they keep it all on the same process, different call stacks but same memory space
one thread can write into memory of anothe thread
easier to communicate b/w threads

windows - create thread

posix threads api - pthreads (standard api can be used everywhere)

function that creates a new thread (pthreads p thread create) pointer to a function

with pthreads (thread function takes one void pointer and returns a void)

ALOT WE CAN TALK ABOUT THREADS 


*/

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* hesaid( void * arg) {
    while(1)
    {
        sleep(1);
        printf("He said!\n");
    }
    NULL;
}

void shesaid() {
    while(1)
    {
        sleep(2);
        printf("She said!\n");
    }
}

int main() {
    pthread_t newthread;

    pthread_create(&newthread, NULL, hesaid, NULL);

    shesaid();
}