/*

Thread allocates memory, and gives it back to main when done.
remove v declaration

We get the end pointer returned by the thread
We store a pointer at the address
It can point to a struct, array

*/
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

void* hesaid( void * arg) {
    int *iptr = (int *)malloc(sizeof(int));
    *iptr = 6;
    for(int idx=0; idx < 7; idx++)
    {
        sleep(1);
        printf("He said: %d & %d!\n", idx+1, *iptr);
        (*iptr)++;
    }
    return iptr;
}

void shesaid() {
    for(int idx=0; idx < 4; idx++)
    {
        sleep(2);
        printf("She said: %d!\n", idx+1);
    }
}

int main() {
    pthread_t newthread;
    int *result; // pointer to a pointer
    //int v = 6;
    pthread_create(&newthread, NULL, hesaid, NULL);

    shesaid();
    pthread_join(newthread, (void *)&result); // allows us to get return value from function
    printf("Thread is Done: *result = %d\n", *result);
}