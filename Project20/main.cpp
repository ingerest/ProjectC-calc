#include "gmock/gmock.h"

class Cal
{
public:
	//이곳에 제작

	int getGop(int num1, int num2)
	{
		return num1 * num2;
	}
};

//테케 추가
TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
}

TEST(t1, GopTest)
{
	Cal cal;
	EXPECT_EQ(8, cal.getGop(2, 4));
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}