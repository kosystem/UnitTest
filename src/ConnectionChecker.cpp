#include "ConnectionChecker.h"
#include "IO.h"

ConnectionChecker::ConnectionChecker(int *base) {
    this->base = base;
}

bool ConnectionChecker::getConnection(){
    return io_read(base, 0);
}
