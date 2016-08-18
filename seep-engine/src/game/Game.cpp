#include "../Seep.h"

int main()
{
    Window _window("Game", 1280, 720);

    while (!_window.shouldClose())
    {
        _window.update();
    }
}