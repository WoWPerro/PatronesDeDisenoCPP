#pragma once
#include "Command.h" 

class InputHandler
{
public:
    InputHandler();
    ~InputHandler();

    ICommand* handleInput(char tecla);

private:
    ICommand* botonW_;
    ICommand* botonF_;
};

