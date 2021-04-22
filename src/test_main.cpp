#include <gtest/gtest.h>

#include "main.h"

TEST(Maintest, RomanIequal1) { EXPECT_EQ(1, RomanToInt("I")); }
TEST(Maintest, RomanVequal5) { EXPECT_EQ(5, RomanToInt("V")); }
TEST(Maintest, RomanIIequal2) { EXPECT_EQ(2, RomanToInt("II")); }
