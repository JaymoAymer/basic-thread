// Created by Jaymo Aymer on 15/03/2021.

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* routine()
{
    printf("Inside the thread - Test from thread\n");
    sleep(4);
    printf("Inside the thread - Ending thread\n");
}

void pthreadCreateErrorHandler()
{
    printf("[EAGAIN] - Insufficient resources to create a new thread\n");
}

void pthreadJoinErrorHandler()
{
    printf("[ESRCH] - No thread with the given ID could be found\n");
}

int main(int argc, char* argv[])
{
    // pthread_t vars
    pthread_t threadOne, threadTwo;

    // threadOne creation check
    if (pthread_create(&threadOne, NULL, &routine, NULL) != 0)
    {
        pthreadCreateErrorHandler();
    }

    // threadTwo creation check
    if (pthread_create(&threadTwo, NULL, &routine, NULL) != 0)
    {
        pthreadCreateErrorHandler();
    }

    // threadOne termination check
    if (pthread_join(threadOne, NULL) != 0)
    {
        pthreadJoinErrorHandler();
    }

    // threadTwo termination check
    if (pthread_join(threadTwo, NULL) != 0)
    {
        pthreadJoinErrorHandler();
    }

    return 0;
}


