// Created by Jaymo Aymer on 15/03/2021.

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "routine.h"

void* routine()
{
    printf("Inside the thread - Test from thread\n");
    sleep(4);
    printf("Inside the thread - Ending thread\n");

    return 0;
}

