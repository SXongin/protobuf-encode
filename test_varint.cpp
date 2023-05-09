#include <gtest/gtest.h>

#include <string>
#include <cstdint>

std::string encode(std::int32_t) {
  return {"\0", 1};
};

TEST(VARINT, ZERO) {
  EXPECT_EQ(encode(0), std::string("\0", 1));
}