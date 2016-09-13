#include "../Seep.h"

int main()
{
    Window window("Game", 1280, 720);
    //state.changeState(...);

    while (!window.shouldClose())
    {
        window.update();
    }
}