// Created by Jaymo Aymer on 15/03/2021.

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

#include "routine.h"
#include "pthreadCreateErrorHandler.h"
#include "pthreadJoinErrorHandler.h"

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


