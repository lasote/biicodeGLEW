#include "google/gtest/gtest.h"

#include <iostream>
#include "glew.h"

using namespace std;

TEST(GlewTest, ShowGlewVersion) {
  	cout << "GLEW version: " << glewGetString(GLEW_VERSION) << endl;
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
