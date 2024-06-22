#include <iostream>
#include "GLFW/glfw3.h"
#include <libavcodec/avcodec.h>
#include <libswscale/swscale.h>

int main(int argc, char** argv) {
	GLFWwindow* window;

    if (!glfwInit()) {
        std::cout << "ERROR: Couldn't initialize GLFW!" << std::endl;
        return 1;
    }

    window = glfwCreateWindow(640, 480, "MediaPlayer", NULL, NULL);

    if (!window) {
        std::cout << "ERROR: Couldn't create window!" << std::endl;
        return 1;
    }

    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window)) {
        std::cout << "Hello" << std::endl;
        glfwWaitEvents();
    }

	return 0;
}