#include "StateStack.h"

// Removes previous state from stack
void StateStack::changeState(StateStack* state)
{
    // Get rid of current state

    // Init new state
}

// Moves state on top of stack, remembers previous
// Will NOT call changeState()
void StateStack::pushState(StateStack* state)
{
    // Pause state currently on

    // Init new state
}

// Leaves the current state and loads a new one
// Will call changeState()
void StateStack::popState()
{
    // Get rid of current state

    // Resume previous state
}

// Gives current state access to event handling
void StateStack::handleEvents()
{
    states.back()->handleEvents();
}

// Gives state access to update with game update rate
void StateStack::update()
{
    states.back()->update();
}

// Gives state control of what is being drawn
void StateStack::draw()
{
    states.back()->draw();
}