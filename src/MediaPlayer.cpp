#include "Window.hpp"

#include <iostream>
#include <libavcodec/avcodec.h>
#include <libswscale/swscale.h>

int main(int argc, char** argv) {
	Window* gl_window = new Window(1280, 720, "MediaPlayer");
    gl_window->initWindow();

    while (!gl_window->isWindowNotClosed()) {
        gl_window->updateWindow();
    }

    gl_window->destroyWindow();
    free(gl_window);

	return 0;
}