#include "IO.h"
#include <stdint.h>

int *setIoAddress(int base, int offset){
    int *p = (int *)base + offset;
    return p;
}

void io_write(int base, int offset, int data){
    int *p = setIoAddress(base, offset);
    *p = data;
}

uint32_t io_read(int base, int offset){
    int *p = setIoAddress(base, offset);
    return *p;
}


