#include <gtest/gtest.h>

#include "main.h"

TEST(Maintest, StringLengthEquals42) {
  EXPECT_EQ(42, GetLengthOfString("Donaudampfschiffahrtsgesellschaftskapitän"));
}
