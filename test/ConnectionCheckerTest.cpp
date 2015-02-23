#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "../src/ConnectionChecker.h"


TEST_GROUP(ConnectionChecker)
{

    ConnectionChecker *checker;
    uint32_t base;

    void setup()
    {
        checker = new ConnectionChecker(&base);
    }

    void teardown()
    {
        delete(checker);
    }

};

TEST(ConnectionChecker, ReadCableConnection){
    CHECK_TRUE(checker->getConnection());
}

TEST(ConnectionChecker, ReadCableConnectionWhenNotConnected){
    CHECK_FALSE(checker->getConnection());
}
