#include <gtest\gtest.h>

void main(int argc, char* argv[])
{
	//Filtering
	::testing::GTEST_FLAG(filter) = "Matrix*";

	//Executing Tests
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
}