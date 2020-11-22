/*

pthreads / arguments / results



*/
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* hesaid( void * arg) {
    int *iptr = (int *)arg;
    for(int idx=0; idx < 7; idx++)
    {
        sleep(1);
        printf("He said: %d & %d!\n", idx+1, *iptr);
        (*iptr)++;
    }
    NULL;
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
    int v = 6;
    pthread_create(&newthread, NULL, hesaid, &v);

    shesaid();
    pthread_join(&newthread, NULL);
    printf("Done: v equalz %d\n", v);
}