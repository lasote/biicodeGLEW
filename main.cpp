#include <iostream>
#include <dimitrikourk/glew/glew.h> 

using namespace std;

int main(int argc, char **argv) {
  	cout << "GLEW version: " << glewGetString(GLEW_VERSION) << endl;
}
