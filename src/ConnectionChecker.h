#ifndef _CONNECTIONCHECKER_H
#define _CONNECTIONCHECKER_H

#include <stdint.h>

class ConnectionChecker {

    public:
        ConnectionChecker(uint32_t *base);
        bool getConnection();

    private:
        uint32_t *base;
};

#endif
