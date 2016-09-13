#include "Window.h"

Window::Window(const char *title, int width, int height)
{
    m_title = title;
    m_width = width;
    m_height = height;

    if (!initGraphics())
        glfwTerminate();
}

Window::~Window()
{
    glfwTerminate();
}

bool Window::initGraphics()
{
    if (!glfwInit())
    {
        return false;
    }

    m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);

    if (!m_window)
    {
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(m_window);

    return true;
}

void Window::update()
{
    glfwSwapBuffers(m_window);
    glfwPollEvents();
}

bool Window::shouldClose()
{
    return glfwWindowShouldClose(m_window);
}