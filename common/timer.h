/**
 * author:  hjx
 * date:    2023-7-11
 * brief:   calculate consumption time
*/

#ifndef TIMER_H
#define TIMER_H

#include <stdio.h>
#include <time.h>

#define INIT_TIME(s, e) \
    struct timespec s, e;

#define START_TIME(s) \
    clock_gettime(CLOCK_MONOTONIC, &s);

#define END_TIME(s, e, descrp) \
    clock_gettime(CLOCK_MONOTONIC, &e); \
    double time_##descrp = (e.tv_sec - s.tv_sec) + (e.tv_nsec - s.tv_nsec) / 1e9; \
    printf("[%s:%d] " #descrp " = %.6fs.\n",__FILE__, __LINE__, time_##descrp);
#endif