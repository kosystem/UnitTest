#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "../src/ConnectionChecker.h"


TEST_GROUP(ConnectionChecker)
{

    ConnectionChecker *checker;
    int base;

    void setup()
    {
        checker = new ConnectionChecker(&base);
    }

    void teardown()
    {
        mock().clear();
        delete(checker);
    }

};

TEST(ConnectionChecker, ReadCableConnection){
    mock().expectOneCall("io_read")
        .withParameter("base", &base)
        .withParameter("offset", 0)
        .andReturnValue(true);
    CHECK_TRUE(checker->getConnection());
    mock().checkExpectations();
}

//TEST(ConnectionChecker, ReadCableConnectionWhenNotConnected){
//    CHECK_FALSE(checker->getConnection());
//}
