#include"Test.h"

void Test::testAll(){
	testSillyCode();
}

void Test::testSillyCode(){

	vector<int> sillyVector{ 1, 2, 3 };
	EXPECT_EQ(3, sillyVector.size());
}
