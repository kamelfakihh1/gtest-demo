#include <gtest/gtest.h>
#include "math.h"

TEST(FactorialTest, Zero) {
    EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialTest, PositiveNumbers) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(4), 24);
    EXPECT_EQ(factorial(5), 120);
    // Add more test cases as needed
}

TEST(SquareTest, PositiveNumbers) {
    EXPECT_EQ(square(0), 0);
    EXPECT_EQ(square(1), 1);
    EXPECT_EQ(square(2), 4);
    EXPECT_EQ(square(3), 9);
    EXPECT_EQ(square(10), 100);
    // Add more test cases as needed
}

TEST(SquareTest, NegativeNumbers) {
    EXPECT_EQ(square(-1), 1);
    EXPECT_EQ(square(-2), 4);
    EXPECT_EQ(square(-3), 9);
    EXPECT_EQ(square(-10), 100);
    // Add more test cases as needed
}