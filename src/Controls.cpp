#include <BearLibTerminal.h>
#include "../include/Controls.h"

void Controls::update() {
    is_exit = false;
    is_press_up = false;
    is_press_down = false;
    is_press_left = false;
    is_press_right = false;

    auto key = terminal_read();

    if (key == TK_CLOSE) { is_exit = true; }
    if (key == TK_UP) { is_press_up = true; }
    if (key == TK_DOWN) { is_press_down = true; }
    if (key == TK_RIGHT) { is_press_right = true; }
    if (key == TK_LEFT) { is_press_left = true; }
}

bool Controls::isExit() const { return is_exit; }

bool Controls::isPressUp() const { return is_press_up; }

bool Controls::isPressDown() const { return is_press_down; }

bool Controls::isPressLeft() const { return is_press_left; }

bool Controls::isPressRight() const { return is_press_right; }
