#include "Window.hpp"
#include <iostream>

Window::Window(int width, int height, const char* title) :
    m_width(width), m_height(height), m_title(title) {};

void Window::initWindow() {
    if (!glfwInit()) {
        return;
    }
    
    m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);
    if (!m_window) {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(m_window);
}

void Window::updateWindow() {
    glfwSwapBuffers(m_window);
    glfwPollEvents();
}

void Window::destroyWindow() {
    glfwTerminate();
}

GLFWwindow* Window::getWindow() {
    return m_window;
}

bool Window::isWindowNotClosed() {
    return !glfwWindowShouldClose(m_window);
}