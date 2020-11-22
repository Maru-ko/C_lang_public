/*

pthread_join is useful due to that it waits until a specific thread is finished running so that it may continue

*/

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>


void* hesaid( void * arg) {
    for(int idx=0; idx < 7; idx++)
    {
        sleep(1);
        printf("He said! %d\n", idx+1);
    }
    NULL;
}

void shesaid() {
    for(int idx=0; idx < 4; idx++)
    {
        sleep(2);
        printf("She said! %d\n", idx+1);
    }
}

int main() {
    pthread_t newthread;

    pthread_create(&newthread, NULL, hesaid, NULL);

    shesaid();
    pthread_join(&newthread, NULL);
}