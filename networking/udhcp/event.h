#include <stdio.h>
#include <time.h>

static inline void print_event(const char *name) {
    struct timespec now;

    clock_gettime(CLOCK_MONOTONIC, &now);
    printf("{ \"event\": \"%s\", \"time\": %ld.%09ld }\n", name, now.tv_sec, now.tv_nsec);
}
