#include "gmock/gmock.h"

class Cal
{
public:
	//이곳에 제작
	int getMinus(int a, int b)
	{
		return a - b;
	}
};

//테케 추가
TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
}

TEST(t1, testMinus)
{
	Cal* cal = new Cal();

	int result = cal->getMinus(5, 2);

	EXPECT_EQ(3, result);
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}