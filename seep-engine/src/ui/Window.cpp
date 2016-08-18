#include "Window.h"

Window::Window(const char *title, int width, int height)
{
    _title = title;
    _width = width;
    _height = height;

    if (!_init())
        glfwTerminate();
}

Window::~Window()
{
    glfwTerminate();
}

bool Window::_init()
{
    if (!glfwInit())
    {
        return false;
    }

    _window = glfwCreateWindow(_width, _height, _title, NULL, NULL);

    if (!_window)
    {
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(_window);

    return true;
}

void Window::update()
{
    glfwSwapBuffers(_window);
    glfwPollEvents();
}

bool Window::shouldClose()
{
    return glfwWindowShouldClose(_window);
}