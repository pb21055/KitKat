#include "../src/KitKat.hpp"
#include "../unit_test_framework-master/unit_test_framework.h"

 TEST(returnString)
{
    string testString;

    testString = KitKat(1);
    ASSERT_EQUAL(testString, "1");

    testString = KitKat(2);
    ASSERT_EQUAL(testString, "2");

    testString = KitKat(4);
    ASSERT_EQUAL(testString, "4");
}

TEST(returnKit)
{
    string testString;

    testString = KitKat(3);
    ASSERT_EQUAL(testString, "Kit!");

    testString = KitKat(9);
    ASSERT_EQUAL(testString, "Kit!");

    testString = KitKat(27);
    ASSERT_EQUAL(testString, "Kit!");
}

TEST(returnKat)
{
    string testString;

    testString = KitKat(5);
    ASSERT_EQUAL(testString, "Kat!");

    testString = KitKat(10);
    ASSERT_EQUAL(testString, "Kat!");

    testString = KitKat(25);
    ASSERT_EQUAL(testString, "Kat!");
}

TEST(returnKitKat)
{
    string testString;

    testString = KitKat(15);
    ASSERT_EQUAL(testString, "Have a break, have a KitKat!");

    testString = KitKat(30);
    ASSERT_EQUAL(testString, "Have a break, have a KitKat!");

    testString = KitKat(60);
    ASSERT_EQUAL(testString, "Have a break, have a KitKat!");
}

TEST_MAIN(
)

