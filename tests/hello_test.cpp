#include <gtest/gtest.h>
extern "C"{
    #include "palindrome.h"
}
// extern static int isPalindrome(char *s, int start, int end);
// TEST(HelloTest, BasicAssertions) {
//     // Expect two strings not to be equal.
//     EXPECT_STRNE("hello", "world");
//     char str[] = {"ABCCBA"};
//     int len_base = strlen(str);
//     // int result = isPalindrome(str, 0, len_base);
//     // Expect equality.
//     EXPECT_EQ(result, len_base);

//     char str2[] = {"ABCcBA"};
//     len_base = strlen(str2);
//     result = isPalindrome(str2, 0, len_base);
//     EXPECT_NE(result, len_base);
// }