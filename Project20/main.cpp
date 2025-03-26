#include "gmock/gmock.h"

class Cal
{
public:
	//ÀÌ°÷¿¡ Á¦ÀÛ
	int getSum(int a, int b){return a+b;}
};

//Å×ÄÉ Ãß°¡
TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
}

TEST(t1, TSUM)
{
	Cal cal;
	int expected = 6;
	int actual = cal.getSum(3,3);
	EXPECT_EQ(expected, actual);
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
