#ifndef _CONNECTIONCHECKER_H
#define _CONNECTIONCHECKER_H

class ConnectionChecker {

    public:
        ConnectionChecker(int *base);
        bool getConnection();

    private:
        int *base;
};

#endif
