#pragma once
#include "Controls.h"

class Person {
private:
    int x;
    int y;
    char img = '@';
    const Controls &keyboard;
    void changeXY();
    void printPlayer();

public:
    Person(const Controls &keyboard_param, int person_x = 10, int person_y = 15):
        keyboard(keyboard_param), x(person_x), y(person_y) {};
    void updatePlayer();
    void leftStep();
    void rightStep();
    void upStep();
    void downStep();
};