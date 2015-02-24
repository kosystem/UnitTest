#include "CppUTestExt/MockSupport.h"
#include "IO.h"

void io_write(int base, int offset, int data){
    mock().actualCall("io_write")
        .withParameter("base", base)
        .withParameter("offset", offset)
        .withParameter("data", data);
}

int io_read(int base, int offset){
    return 0;
}


