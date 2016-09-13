#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW\glfw3.h>

class Window
{
private:
    GLFWwindow *m_window;
    const char *m_title;
    int m_width, m_height;
    bool initGraphics();

public:
    Window(const char *title, int width, int height);
    ~Window();

    void update();
    bool shouldClose();
};

#endif