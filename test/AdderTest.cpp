#include<gtest/gtest.h>
#include"../Adder/Adder.h"


TEST(AdderTest, PositiveNums)
{
    Adder* a = {};
	  EXPECT_EQ (18, a->add(7,11));
    EXPECT_EQ (25, a->add(10,15));
    EXPECT_EQ (1234, a->add(1230,4));
}

TEST(AdderTest, NegativeNums)
{
	Adder* a = {};	
	EXPECT_EQ(-11, a->add(-2,-9));
	EXPECT_EQ(-3, a->add(-5,2));
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
