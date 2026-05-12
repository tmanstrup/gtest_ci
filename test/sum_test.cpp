#include <gtest/gtest.h>
#include "../src/sum.h"

TEST(SumTest, SumOfSixteenValues) {
    std::vector<double> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    EXPECT_DOUBLE_EQ(sum(values), 136.0);
}

TEST(SumTest, SumOfZeros) {
    std::vector<double> values(16, 0.0);
    EXPECT_DOUBLE_EQ(sum(values), 0.0);
}

TEST(SumTest, SumOfNegativeValues) {
    std::vector<double> values = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16};
    EXPECT_DOUBLE_EQ(sum(values), -136.0);
}

TEST(SumTest, SumOfNegativeValuesFail) {
    std::vector<double> values = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16};
    EXPECT_DOUBLE_EQ(sum(values), -134.0);
}