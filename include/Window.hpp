#ifndef WINDOW
#define WINDOW

#include <GLFW/glfw3.h>

class Window {
private:
    int m_width, m_height;
    const char* m_title;
    GLFWwindow* m_window;

public:
    Window(int width, int height, const char* title);
    void initWindow();
    void updateWindow();
    void destroyWindow();
    GLFWwindow* getWindow();
    bool isWindowNotClosed();
};

#endif