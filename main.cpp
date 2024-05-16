#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

using std::cout, std::endl;

int main() {
    if (!glfwInit())
		  return -1;

    cout << "Success" << endl;
    return 0;
}
