#include "gmock/gmock.h"

class Cal
{
public:
	//ÀÌ°÷¿¡ Á¦ÀÛ
	int getGop(int a, int b){return a*b;}
};

//Å×ÄÉ Ãß°¡
TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
