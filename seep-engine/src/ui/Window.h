#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW\glfw3.h>

class Window
{
private:
    GLFWwindow *_window;
    const char *_title;
    int _width, _height;
    bool _init();

public:
    Window(const char *title, int width, int height);
    ~Window();

    void update();
    bool shouldClose();
};

#endif