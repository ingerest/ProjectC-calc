#include "gmock/gmock.h"

class Cal
{
public:
	//이곳에 제작
};

//테케 추가
TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}