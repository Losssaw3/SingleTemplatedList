#include <cstddef>
#include <gtest/gtest.h>
#include <string>


#include "SingleTemplatedList.cpp"


template <typename T> struct Node;

template <typename T> class List;

/**
 * Tests consist of 3 parts
 1) create a object and use some method
 2) create actual and expected values
 3) ASSERT
 * 
 */
TEST(ASSERT_TRUE_TESTS, stringListTest)
{
    List<std::string> defaultList;
    std::string str1 = "qwe";
    defaultList.pushBack(str1);

    std::string actual = defaultList.toString();
   
    std::string expected = str1 + ' ';

    ASSERT_TRUE(actual == expected);
}

TEST(ASSERT_TRUE_TESTS, intListTest)
{
    List<int> defaultList;
    int a = 5;
    defaultList.pushBack(a);

    std::string actual = defaultList.toString();

    std::string expected = std::to_string(a) + ' ';
   
    ASSERT_TRUE(actual == expected);
}

TEST(ASSERT_TRUE_TESTS, isCollectionClearTets)
{
    List<std::string> defaultList;
    bool actual =  defaultList.isCollectionClear();

    bool expected = 1;

    ASSERT_TRUE(defaultList.isCollectionClear() == expected);
}

TEST(ASSERT_TRUE_TESTS, pushBackTest)
{
    List <std::string> defaultList;
    std::string str1 = "qwe";
    std::string str2 = "zxc";
    defaultList.pushBack(str1);
    defaultList.pushBack(str2);
    std::string actual = defaultList.toString();

    std::string expected = str1 + ' ' + str2 + ' ';

    ASSERT_TRUE(actual == expected);
}

TEST(ASSERT_TRUE_TESTS, pushFrontTest)
{
      List <std::string> defaultList;
    std::string str1 = "qwe";
    std::string str2 = "zxc";
    defaultList.pushFront(str1);
    defaultList.pushFront(str2);
    std::string actual = defaultList.toString();

    std::string expected = str2 + ' ' + str1 + ' ';

    ASSERT_TRUE(actual == expected); 
}

TEST(ASSERT_EQUAL_TESTS, getSizeTest)
{
    List<std::string> defaultList;
    std::string str1 = "qwe";
    std::string str2 = "zxc";
    defaultList.pushFront(str1);
    defaultList.pushFront(str2);
    int actual = defaultList.getSize();

    int expected = 2;

    ASSERT_EQ(actual, expected);
}

TEST(ASSERT_TRUE_TESTS, popFrontTest)
{
     List<std::string> defaultList;
    std::string str1 = "qwe";
    std::string str2 = "zxc";
    defaultList.pushBack(str1);
    defaultList.pushBack(str2);
    defaultList.popFront();
    std::string actual = defaultList.toString();

    std::string expected = str2 + ' ';

    ASSERT_EQ(actual, expected);
}

TEST(ASSERT_EQUAL_TESTS, clearTest)
{
     List<std::string> defaultList;
    std::string str1 = "qwe";
    std::string str2 = "zxc";
    defaultList.pushFront(str1);
    defaultList.pushFront(str2);
    defaultList.clear();

    std::string actual = defaultList.toString();
    int actualSize = 0;

    std::string expected = "";
    int expectedSize = 0;

    ASSERT_EQ(actual, expected);
    ASSERT_EQ(actualSize, expectedSize);

}

TEST(ASSERT_EQUAL_TESTS, NodeContructorTest)
{
    std::string str1 = "qwe";
    Node<std::string> defaultNode(str1);
    
    std::string actual = defaultNode.data;

    std::string expected = str1;

    ASSERT_EQ(actual, expected);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
