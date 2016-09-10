#ifndef STATE_STACK_H
#define STATE_STACK_H

#include <vector>

class StateStack
{
private:
    std::vector<StateStack*> states;

public:
    void changeState(StateStack* state);
    void pushState(StateStack* state);
    void popState(); 
};

#endif