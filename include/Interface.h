#ifndef MAIN_CPP_INTERFACE_H
#define MAIN_CPP_INTERFACE_H

#include "Window.h"
#include "Player.h"
#include "Controls.h"

class Interface {
    Window &window_;
    Player &player_;
    Controls &controls_;
public:
    Interface(Window &window, Player &player, Controls &controls) :
            window_(window), player_(player), controls_(controls) {}

    void movePlayer();

    void upStep();

    void downStep();

    void leftStep();

    void rightStep();

    void collectMoney();
};

#endif