#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char * argv []) {
        size_t s3 = sysconf(_SC_LEVEL3_CACHE_SIZE); 
        printf("L3 cache size: %zd\n", s3);
        size_t s4 = sysconf(_SC_LEVEL4_CACHE_SIZE); 
        printf("L4 cache size: %zd\n", s4);
}
