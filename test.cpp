#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, Spaces) {
	char* test_val[3]; test_val[0] = "./c-echo";
	test_val[1] = " "; 
	test_val[2] = " ";
	EXPECT_EQ("   ", echo(3, test_val));
}

TEST (EchoTest, Numbers) {
	char* test_val[4]; test_val[0] = "./c-echo";
	test_val[1] = "8";
	test_val[2] = "23";
	test_val[3] = "1";
	EXPECT_EQ("8 23 1", echo(4, test_val));
}

TEST(EchoTest, SpecialCharacters) {
	char* test_val[3];
	test_val[0] = "./c-echo";
	test_val[1] = "@#";
	test_val[2] = "*~\\";
	EXPECT_EQ("@# *~\\", echo(3, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
